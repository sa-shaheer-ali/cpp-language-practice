#include<iostream>
#include<thread>
#include<mutex>
#include<queue>
#include<chrono>

std::queue<int> buffer;
const unsigned int MAX_BUFFER_SIZE=5;
std::mutex mtx;
void producer(int id){
    int item=0;
    while(true){
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        std::unique_lock<std::mutex>(mtx);
        if(buffer.size()<MAX_BUFFER_SIZE){
            buffer.push(++item);
            std::cout<<"Producer "<<id<<"produced item "<<item<<std::endl;

        }
        else{
            std::cout<<"Producer "<<id<<"the buffer is full "<<std::endl;

        }
    }
}

void consumer(int id){
    while(true){
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::unique_lock<std::mutex>(mtx);
    if(!buffer.empty()){
        int item=buffer.front();
        buffer.pop();
        std::cout<<"Consumer "<<id<<"Consumed item "<<item<<std::endl;

    }
    else {
            std::cout << "Consumer " << id << " waiting... buffer empty. \n";
        }
    }
}

int main (){
    std::thread p1(producer,1);
    std::thread p2(producer,2);
    std::thread c1(consumer,1);
    std::thread c2(consumer,2);
    p1.join();
    p2.join();
    c1.join();
    c2.join();
    return 0;

}
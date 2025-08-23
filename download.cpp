#include <iostream>
#include <thread>
#include<vector>
#include <chrono>
#include <mutex>
#include <iomanip>

std::mutex mtx;
int totalProgess=0;
int totalFiles=3;
int fileSize=100;

void downloadFile(int id){
    int progress=0;
    while(progress<fileSize){
        std::this_thread::sleep_for(std::chrono::seconds(1));

        progress+=5  ;
        {
            std::lock_guard<std::mutex>lock(mtx);
            totalProgess+=5;
            std::cout<<"File " <<id<<"progress: "<<std::setw(4)<<progress << "%   "
                      << "Total: " <<(totalProgess*100)/(totalFiles*fileSize)<<"&\n";


        }
    }
}
int main (){
    std::cout<<"Starting multithread downloads...\n\n";
    std::vector<std::thread>threads;
    for(int i=1;i<=totalFiles;i++){
        threads.emplace_back(downloadFile,i);
    }
    for(auto &t:threads){
        t.join();
    }
    std::cout<<"\nAll downloads completed \n";
    return 0;

}

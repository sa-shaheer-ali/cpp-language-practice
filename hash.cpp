#include<iostream>
#include<map>
#include<unordered_map>
int main(){
    std::unordered_map<std::string,int> m;
    std::pair<std::string,int> p=std::make_pair("shaheer",10);
    m.insert(p);
    std::pair<std::string,int>p2=std::make_pair("house",40);
    std::pair<std::string,int>pair3("sodia",43);
    m.insert(pair3);
    m["what the hell"]=110;
    m["how are you my boi"]=1332;
    m["m the only one"]=994;
m.insert(p2);

for(auto i:m){
    std::cout<<i.first<<":"<<i.second;
    std::cout<<std::endl;
}
std::cout<<m["what the hell"];
std::cout<<m.at("what the hell");
std::unordered_map<std::string,int>::iterator it;
it=m.begin();
while(it!=m.end()){
    std::cout<<" SECOND ITERATOR"<<std::endl;
    std::cout<<it->first<<" "<<it->second<<std::endl;
it++;
}

}
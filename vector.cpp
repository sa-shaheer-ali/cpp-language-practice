#include <iostream>
#include <vector>
int main(){
    //the first one i.e 5 is to tell the size of the vector and the second one is to initialize the value with :)

    std::vector< int> vec(5,29);
    for(int i:vec)  {
          std::cout<<i<<std::endl;
}
vec.clear();
vec.push_back(43);
vec.push_back(643);
vec.push_back(53);

 for(int i:vec)  {
          std::cout<<i<<std::endl;
}


}
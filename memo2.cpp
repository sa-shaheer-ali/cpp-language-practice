#include <iostream>
#include <string>
#include <unordered_map>

int  gridTraveler(int m,int n,std::unordered_map<std::string,int> memo){
    if(m==0 ||n==0){
        return 0;
    }
    if(m==1 && n==1){
        return 1;
    }

    std::string key =std::to_string(m)+','+std::to_string(n);
    if(memo.count(key)){
        return memo[key];
    }
    memo[key]=gridTraveler(m-1,n,memo)+gridTraveler(m,n-1,memo);
    return memo[key];


}
int main() {
  // Create an empty memoization table to store solutions for subproblems
  std::unordered_map<std::string, int> memo;

  // Test cases
  std::cout << gridTraveler(1, 1,memo) << std::endl; // Output: 1
  std::cout << gridTraveler(2, 3,memo) << std::endl; // Output: 3
  std::cout << gridTraveler(3, 2,memo) << std::endl; // Output: 3
  std::cout << gridTraveler(33, 45,memo) << std::endl; // Output: 6
  std::cout << gridTraveler(18, 18,memo) <<std:: endl; // Output: 2333606220

  return 0;
}
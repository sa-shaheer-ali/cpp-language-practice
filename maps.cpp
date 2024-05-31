#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

struct countryrecord{
    std::string country;
    std::string city;
    int area;
    
};
int main(){
  std::vector<countryrecord>country;

  country.emplace_back("usa","new york", 12314);
  country.emplace_back("pk","islamabad", 3214);
  country.emplace_back("bharat","dehli", 14234);
  country.emplace_back("canada","toronto", 11231);

std::unordered_map<std::string,countryrecord> countryMap;
countryMap["usa"]=countryrecord{"usa","new york",1231};
countryMap["pk"]=countryrecord{"pk","islamabad",1231};
countryMap["bharat"]=countryrecord{"bharat","dehli",1231};
countryMap["canada"]=countryrecord{"canada","toronto",1231};
countryrecord & data=countryMap["usa"];
std::cout<<data.city;



return  0;
}

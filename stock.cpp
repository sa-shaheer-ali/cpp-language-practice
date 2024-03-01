#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

enum class OrderType{
    Market,Limit

};
class Stock{
    private: 
    std::string symbol;
    double price;
    public:
    Stock(std::string s,double p): symbol(s),price(p){};
    std::string getsymbol(){
        return symbol;

    }
    double getprice(){
        return price;

    }


};
class User{
    private:
    std::string username;
    std::string password;
    double cashdeposited;
    public:
    User(const std::string & name,const std::string & pass):username(name),password(pass),cashdeposited(100000){};

    std::string getusername(){
        return username;
    }
    double getcash(){
        return cashdeposited;
    }
    void update(double amount){
        cashdeposited+=amount;

    }

};
class Order{
    private:
    User * user;
    Stock * stock;
    int quantity;
    double price;
    OrderType type;
public:
    Order(User * use,Stock * stoc,int quant,double pric,OrderType typ):user(use),stock(stoc),quantity(quant),price(pric),type(typ){}
    User * getuser()const{
        return user;
    }
    Stock * getstock()const{
        return stock;
    }
    int getquantity()const{
        return quantity;

    }
    double getprice()const{
        return price;

    }
    OrderType getType()const{
        return type;
    }

};

class OrderMatchingEngine {
    public:
    
    void placeOrder(Order * order){
        if (order->getType()==OrderType::Market)
        {
           executeMarketOrder(order); 
           }
        
    else{
        orderBook[order->getstock()].push_back(order);
    std:: cout << "Limit order placed successfully!" << std::endl;}


    }

    void executeMarketOrder(Order* order){
        double totalprice=order->getquantity() * order->getstock()->getprice();
        if (order->getuser()->getcash()>=totalprice)
        {order->getuser()->update(-totalprice);
         std::  cout << "Market order executed successfully!" <<std:: endl;
        } else {
            std::cout << "Insufficient funds to execute market order!" <<std:: endl;
        }


    }
        private:
      std::unordered_map<Stock*, std::vector<Order*>> orderBook;
};
int main (){
    User user1("user1","hello");
    User user2("user2","howareyou");
    Stock stock1("LM",1234);
    Stock stock2("CR",5342);
     OrderMatchingEngine  engine;

    Order order1(&user1,&stock1,10,0.0,OrderType::Market);
    engine.placeOrder(&order1);

    Order order2(&user2,&stock2,123,43,OrderType::Limit);
    engine.placeOrder(&order2);
    return 0;


}
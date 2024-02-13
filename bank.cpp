#include <iostream>
#include <algorithm>
#include <vector>


class Account {
    protected:
    std::string Name;
    int AccountNumber;
    int balance;
public:
    Account(std::string n,int num,int bal)
    :Name(n),AccountNumber(num),balance(bal)
    {

    }
    virtual void deposit(int amount){
        balance+=amount;
        std::cout<<"submitted amount:"<<amount<<std::endl<<"your balance:"<<balance<<std::endl;

    }
    virtual void withdraw(int amount){
        if (balance >=amount)
        {balance-=amount;
            std::cout<<"amount withdraw:\n"<<amount<<std::endl<<"balance:\n"<<balance<<std::endl;

        }
        else {
            std::cout<<"insuffient amount.\n"<<std::endl;
        }
        
    }



    int  getAccountNumber(){
        return AccountNumber;

    }
    int getBalance(){
        return balance;
    }
 virtual std::string getType() const = 0;
};
class SavingsAccount : public Account{
 public:  
  SavingsAccount(std::string n,int num,int bal) : Account(n,num,bal){}

  std::string getType() const override{
    return "saving";
  }
};
class CheckingAccount :public Account{
    public:
    CheckingAccount(std::string n,int num,int bal):Account (n,num,bal){}
void withdraw(int amount )override{
    if (balance-amount>0)
    {balance-=amount;
       std::cout << "Withdrawn " << amount << " from account " << AccountNumber << std::endl;
    }
    else {
        std::cout<<"insufficient balance"<<std::endl;
    }
}
std::string getType()const override{
    return "checking";  
};
};
int main (){
std::vector <Account*> account;
account.push_back(new SavingsAccount("Robert",443,45000));
account.push_back(new CheckingAccount("Theon",7893,23411));
while(true){
std::cout<<"WELCOME"<<std::endl;
std::cout<<"1. Deposite"<<std::endl;
std::cout<<"2. Withdraw"<<std::endl;
std::cout<<"3. Check balance"<<std::endl;
std::cout<<"5. exit"<<std::endl;
int choice ;
std::cout<<"enter your choice:"<<std::endl;
std::cin>>choice;
switch (choice)
{
case 1:
{
    int accnumber;
    int amount;
    std::cout<<"enter your account numeber:";
    std::cin>>accnumber;
    std::cout<<"enter your amount:";
    std::cin>>amount;
    auto it=std::find_if(account.begin(),account.end(),[&](Account* acc){return acc->getAccountNumber()==accnumber;});
 
    if (it !=account.end()){
        (*it)->deposit(amount);

    }
    else {
        std::cout<<"amount not found "<<std::endl;
    }
      

}
    break;
    case 2:
    {
        int accnumber;
        int amount;
        std::cout<<"enter account number:"<<std::endl;
        std::cin>>accnumber;
        std::cout<<"enter your amount:"<<std::endl;
        std::cin>>amount;
        auto it=std::find_if(account.begin(),account.end(),[&](Account *acc){return acc->getAccountNumber()==accnumber;});
        if (it!=account.end())
        {(*it)->withdraw(amount);
            /* code */
        }
        else {
            std::cout<<"your account cannot be found.";
        }
        

    }
    break;
    case 3:{
    int accnumber;
    std::cout<<"enter your account number:";
    std::cin>>accnumber;
    auto it=std::find_if(account.begin(),account.end(),[&](Account *acc) {return acc->getAccountNumber()==accnumber;});
    if (it!=account.end())
    {std::cout<<"your account:"<<accnumber<<"  "<<"balance is:"<<(*it)->getBalance()<<std::endl;
        /* code */
    }
    

    
    }
    break;
    case 5:
    std::cout<<"Exiting..."<<std::endl;
    for (auto acc :account)
    {delete acc;

        /* code */
    }return 0;
    


default:
std::cout << "Invalid choice" << std::endl;
    break;
    return 0;
}



}
}
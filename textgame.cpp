#include <iostream>
#include <vector>
#include <string>
class Enemy{
    private:
    std::string name;
    int health;
    int attackDamage;
    public:
    Enemy(std::string nam,int h,int damage): name(nam), health(h),attackDamage(damage){}
    

    bool isDefeated()const{
        return health<=0;

    }
    std::string getName()const{
        return name;

    }
    int getAttackDamage()const{
        return attackDamage;

    }
    void takeDamage(int damage){
        health-=damage;

    }

int getHealth(){
    return health;
}

};
class Player{
    private:
    std::string name;
    int health;
    int attackDamage;
    std::vector<std::string> Inventory;
public:
Player(std::string nam): name(nam),health(100),attackDamage(20){}

std::string getname()const{
    return name;

}
bool isDefeated()const{
    return health<=0;
}
int getAttackDamage(){
    return attackDamage;

}
void takeDamage(int damage){
    health-=damage;
}
void getinventory(std::string item){
    Inventory.push_back(item);
}
void display()const{
    std::cout<<"Inventory";
    for (const std::string& item :Inventory)
    {
        std::cout<<item<<" "<<std::endl;

    }
    
}
int getHealth(){
    return health;
}
};
void combat(Player &player,Enemy &enemy){
    std::cout<<"you encountered with "<<enemy.getName()<<" of health "<<enemy.getHealth()<<std::endl;
    while (!player.isDefeated() && !enemy.isDefeated())
    {
       std::cout<<"you attacked the killer  "<<enemy.getName()<<enemy.getAttackDamage()<<std::endl;
       enemy.takeDamage(player.getAttackDamage());
       if (enemy.isDefeated())
       {std::cout<<"that's the way hero you killed the  "<<enemy.getName()<<enemy.getAttackDamage()<<std::endl;
        break;
       }
        std::cout<<"the killer "<<enemy.getName()<<"  attacks you  "<<player.getname()<<" of health "<<player.getAttackDamage()<<std::endl  ;
       player.takeDamage(enemy.getAttackDamage());
       if (enemy.isDefeated())
       {std::cout<<"you got killed by "<<enemy.getName() <<"sorry  "<<player.getname()<<player.getAttackDamage()<<std::endl;
        break;
       }
       
    }
    
}
void explore (Player &player){
     std:: cout << "You continue exploring the area, " << player.getname() << "." << std::endl;
    std:: cout << "You find a chest. Do you want to open it?" << std::endl;
   std:: cout << "1. Open the chest" << std::endl;
   std:: cout << "2. Leave it" << std::endl;

    int choice;
   std:: cin >> choice;

    if (choice == 1) {
       std:: cout << "You open the chest and find a potion!" << std::endl;
       std:: cout << "You add the potion to your inventory." << std::endl;
        player.getinventory("Potion");
    } else {
       std:: cout << "You decide to leave the chest untouched." << std::endl;
    }

}
int main(){
    std::string playername;
    std::cout << "Welcome to the Adventure Game!" <<std:: endl;
   std:: cout << "Please enter your name: " <<std:: endl;
   std::cin>>playername;
   Player player(playername);
   Enemy Tywin("Tywin",50,10);
   Enemy Ramsey("Ramsey",100,20);
   explore(player);
   combat(player,Tywin);
   if (!player.isDefeated())
   {explore(player);
   combat(player,Ramsey);
    /* code */
   }
   player.display();
   if (!player.isDefeated())
   {std::cout<<"congrate you killed the "<<Ramsey.getName();

    /* code */
   }
   else{
    std::cout<<"Game over"<<std::endl;

   }
   return 0;

   
   
}
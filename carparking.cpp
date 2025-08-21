#include <iostream>
#include <vector>
#include <string>

class Car{
    std::string Plate;
    std::string Owner;
    public:

    Car(std::string p,std::string O):Plate(p),Owner(O){}
    std::string retPlate()const{
        return Plate
        ;
    }
    void Print()const{
        std::cout<<"Owner:"<<Owner<<"Plate:"<<Plate<<std::endl;

    }

};

class CarParking{
    std::vector <Car> cars;
    int capacity;
    public:

    CarParking(int cap):capacity(cap){}
    void addCars(const Car&c){
        if(cars.size()<capacity){
            cars.push_back(c);
            std::cout<<"car added successfully.\n";
        }
        else{
            std::cout<<"there is no space left in the parking lot. \n";

        }

    }
        void removeCar(const std::string& plateno){
            for(auto i=cars.begin();i<cars.end();++i){
                if(i->retPlate()==plateno){
                    cars.erase(i);
                    std::cout<<"Car remove successfully"<<std::endl;
                return;}
                
                
                
                
            }
            std::cout<<"car is not available"<<std::endl;

    }

    void showCars()const {
        if(cars.empty()){
            std::cout<<"no car";
        return;}

        for(const auto& carparked:cars){
            carparked.Print();

        }
    }
    int totalCars()const {

        return cars.size();
    }
};
int main (){
    CarParking lot(3)
;
 lot.addCars(Car("ABC123", "Ali"));
    lot.addCars(Car("XYZ789", "Sara"));
    lot.addCars(Car("JKL456", "Ahmed"));
    lot.addCars(Car("MNO111", "Shaheer"));

    lot.showCars();
    lot.removeCar("XYZ729");
    lot.showCars();
    std::cout << "Total cars: " << lot.totalCars() << std::endl;

    return 0;
}
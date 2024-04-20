#include <iostream>
#include <string>

class  Aircraft{
    private:
    std::string id;
    double altitude;
    double longitude;
    double latitude;

    public:
    Aircraft(std::string name,double alti,double longi,double lat): id(name),altitude(alti),longitude(longi),latitude(lat){}
    void setaltitude(double alti) { altitude=alti;}
    void setlongitude(double longi){longitude=longi;}
    void setLatitude(double lat) { latitude = lat; }

    std::string getid()const{return id;}
    double getaltitide()const{return altitude;}
    double getlongitude()const{return longitude;}
    double getlatitude()const {return latitude;}

};

    class communicationsystem{
    public:
    void data(const Aircraft & air){
        std::cout<<"sending data for the aircraft...: "<<std::endl<<air.getid()<<std::endl<<"altitude: "<<std::endl<<air.getaltitide()<<std::endl<<"longitude: "<<std::endl<<air.getlongitude()<<std::endl<<"latitude: "<<air.getlongitude()<<std::endl;

    }

    };

    class monitoringsystem{
        public:
        void monitoingaircraft(const Aircraft& aircraft  ){
            std::cout<<"monitoring aircraft: "<<aircraft.getid();
            if (aircraft.getaltitide()>10000)
            {std::cout<<"Warning: High Altitude For Aircraft.."<<std::endl;                /* code */
            }
            
        }

    };
    int main(){
        Aircraft aircraft1("A435B",40.231,-53.663,11000);
        communicationsystem system;
        monitoringsystem moniter;
        system.data(aircraft1);
        moniter.monitoingaircraft(aircraft1);
        return 0;
    }
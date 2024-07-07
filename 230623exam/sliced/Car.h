    
#pragma region<include>                                                 //INCLUDE

    #ifndef CAR_H
    #define CAR_H

    #include "CarType.h"
    #include "Tire.h"
    #include <vector>

#pragma endregion<include>

#pragma region<declaration>                                             //DECLARATION

    class Car {                                                             //Car object    

        private:
            const CarType cartype;                                              
            std::vector<Tire*> tires;                                           

        public:
            Car(CarType ct, std::vector<Tire*> t);                              //Constructor to initialize cartype and tires

            CarType getCarType() const;                                         //Getter method to retrieve the car type
            std::vector<Tire*> getTires() const;                                //Getter method to retrieve the tires
            void setTires(std::vector<Tire*> v);                                //Setter method to set the tires
        };

#pragma endregion<declaration>

    #endif 
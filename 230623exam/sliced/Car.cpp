
#pragma region<include>                                                     //INCLUDE

    #include "Car.h"

#pragma endregion<include>

#pragma region<definition>                                                  //DEFINITION

    Car::Car(CarType ct, std::vector<Tire*> t) : cartype(ct), tires(t) {}       //Constructor initializes cartype and tires

        CarType Car::getCarType() const {
            return cartype;                                                         //Returns the car type
        }

        std::vector<Tire*> Car::getTires() const {
            return tires;                                                           //Returns the vector of tire pointers
        }

        void Car::setTires(std::vector<Tire*> v) {
            tires = v;                                                              //Sets the tires vector to a new value
        }

#pragma endregion<definition>
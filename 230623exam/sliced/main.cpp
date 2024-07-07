
#pragma region<include>                                                 //INCLUDE

    #include "CarType.h"
    #include "Tire.h"
    #include "Car.h"
    #include <iostream>
    #include <vector>

#pragma endregion<include>                                                

#pragma region<main>                                                    //MAIN

    int main() {

        //Creating a CarType object
        CarType oa = CarType("Opel", "Astra");
            std::cout << oa.getBrand() << ' ' << oa.getModel() << std::endl;

        //Creating a Tire object
        Tire michelin = Tire("205/40ZR17", SUMMER);
            std::cout << michelin.getSize() << ' ' << michelin.getType() << std::endl;

        //Creating a Car object with a vector of Tire pointers
        Car abc123 = Car(oa, std::vector<Tire*> (4, &michelin));
            std::cout << abc123.getCarType().getBrand() << ' ' << abc123.getCarType().getModel() << ' ' << abc123.getTires().at(0)->getSize() << std::endl;

        //Creating another Tire object
        Tire hankook = Tire("185/60R15", WINTER);
            abc123.setTires(std::vector<Tire*>(4, &hankook));
                std::cout << abc123.getCarType().getBrand() << ' ' << abc123.getCarType().getModel() << ' ' << abc123.getTires().at(3)->getSize() << std::endl;

        return 0;
    }

#pragma endregion<main>
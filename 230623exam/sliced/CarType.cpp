
#pragma region<include>                                                         //INCLUDE         

    #include "CarType.h"

#pragma endregion<include>

#pragma region<definition>                                                      //DEFINITION                                                           

    CarType::CarType(std::string b, std::string m) : brand(b), model(m) {}          //Constructor initializes brand and model

        std::string CarType::getModel() const {                                         //Returns the model of the car type
        return model;   
    }

        std::string CarType::getBrand() const {                                         //Returns the model of the car type
    return brand;   
}

#pragma endregion<definition>

#pragma region<include> 
    
    #ifndef CARTYPE_H
    #define CARTYPE_H

    #include <string>

#pragma endregion<include>

#pragma region<declaration>

    class CarType {

    private:
        const std::string brand;                                    //Member variable to store the brand of the car type
        const std::string model;                                    //Member variable to store the model of the car type

    public:
        CarType(std::string b, std::string m);                      //Constructor to initialize brand and model

        std::string getModel() const;                               //Getter method to retrieve the model
        std::string getBrand() const;                               //Getter method to retrieve the brand
    };

#pragma endregion<declaration>

    #endif
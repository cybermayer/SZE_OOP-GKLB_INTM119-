
#pragma region<include>                                                 //INCLUDE                                                                                                      

    #include "Tire.h"

#pragma endregion<include>

#pragma region<definition>                                              //DEFINITION

    Tire::Tire(std::string s, TireType t) : size(s), type(t) {}             //Constructor initializes size and type

        std::string Tire::getSize() const {                                     //Returns the size of the tire
            return size;                                                    
        }

        TireType Tire::getType() const {                                        //Returns the type of the tire
            return type;                                                    
        }

#pragma endregion<definition>

#pragma region<include>                                                 //INCLUDE

    #ifndef TIRE_H
    #define TIRE_H

    #include <string>

#pragma endregion<include>

#pragma region<declaration>                                             //DECLARATION

    enum TireType {                                                         //Tire types
        SUMMER,
        WINTER,
        ALL_SEASON
    };

    class Tire {                                                            //Tire object
        
        private:
            std::string size;                                                   //Member variable to store the size of the tire
            TireType type;                                                      //Member variable to store the type of the tire

        public:
            Tire(std::string s, TireType t);                                    //Constructor to initialize size and type

            std::string getSize() const;                                        //Getter method to retrieve the size
            TireType getType() const;                                           //Getter method to retrieve the type
    };

#pragma endregion<declaration>

    #endif 
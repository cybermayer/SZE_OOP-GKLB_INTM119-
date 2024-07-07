#pragma region<description>                                                 //DESCRIPTION

    /*

    Készítse el a CarType, Tire és Car osztályokat úgy, hogy az alábbi kód forduljon!

    A CarType egy autó típusát írja le, pontosabban tárolja annak

    márkáját (brand, szöveges adat)
    és típusát (model, szöveges adat).
    Ezek az adatok csak olvashatóak. Ennek megfelelően hozzon létre konstruktort 
    / taginicializátor listát, illetve lekérdező (getter) függvényeket!

    A Tire egy személyautó abroncs jellemzőit rögzíti:

    méret (size, szöveges adat),
    a gumi típusa (type, hagyományos felsorolt típus (nem  osztályt várok), 
    lehetséges értékek: SUMMER, WINTER, ALL_SEASON, ebben a sorrendben).
    Az adatok csak olvashatóak. Ennek megfelelően hozzon létre konstruktort 
    / taginicializátor listát, illetve lekérdező (getter) függvényeket!

    A Car egy konkrét autóról tartja nyilván a következőket:

    típus (CarType referencia),
    felszerelt gumik (Tire mutatók dinamikus vektora).
    Bár az autó típusa konstans, a felszerelt gumik változhatnak az autó élettartama során. 
    Ennek megfelelően hozzon létre konstruktort / taginicializátor listát, 
    lekérdező (getter) függvényeket, és a gumik más gumikra cserélésére szolgáló beállító (setter) tagfüggvényt!

    */

#pragma endregion<description>

#pragma region<include>                                                     //INCLUDE

    #include<iostream>
    #include<vector>

#pragma endregion<include>

#pragma region<class>                                                       //CLASS

    class CarType {                                                             //CarType object

        private:

            const std::string brand;
            const std::string model;

        public:

            CarType(std::string b, std::string m) : brand(b), model(m) {}

            std::string getModel() const {                                                //Returns model
                return model;
            }
            
            std::string getBrand() const {                                                //Returns brand
                return brand;
            }

    };

    enum TireType {                                                             //Enumeration of the possible tiretypes

        SUMMER,
        WINTER,
        ALL_SEASON

    };

    class Tire {                                                                //Tire object

        private:

            std::string size;
            TireType type;

        public:

            Tire(std::string s, TireType t) : size(s), type(t) {}

            std::string getSize() const {                                           //Returns the size of the tire
                return size;
            }

            TireType getType() const {                                              //Returns the type of the tire
                
                return type;

                /*
                switch (type){
                    case SUMMER: return "SUMMER";
                    case WINTER: return "WINTER";
                    case ALL_SEASON: return "ALL:SEASON";
                    default: return "UNKNOWM";
                }
            
                */

            }
    };

    class Car {                                                                 //Car object

        private:

            const CarType cartype;
            std::vector<Tire*> tire;

        public:

            Car(CarType ct, std::vector<Tire*> t) : cartype(ct), tire(t) {}

            CarType getCarType() const {                                        //Returns the CarType object                                
                return cartype;
            }
    
            std::vector<Tire*> getTires() const {                               //Returns the Tire-vector
                return tire;
            }

            void setTires(std::vector<Tire*> v){                                //Sets new tire for the car
                tire = v;
            } 

    };

#pragma endregion<class>

#pragma region<main>                                                        //MAIN

    int main(){

        CarType oa = CarType("Opel", "Astra");
            std::cout << oa.getBrand() << ' ' << oa.getModel() << std::endl;

        Tire michelin = Tire("205/40ZR17", SUMMER);
            std::cout << michelin.getSize() << ' ' << michelin.getType() << std::endl;

        Car abc123 = Car(oa, std::vector<Tire*> (4, &michelin));
            std::cout << abc123.getCarType().getBrand() << ' ' << abc123.getCarType().getModel() << ' ' << abc123.getTires().at(0)->getSize() << std::endl;

        Tire hankook = Tire("185/60R15", WINTER);
            abc123.setTires(std::vector<Tire*>(4, &hankook));
                std::cout << abc123.getCarType().getBrand() << ' ' << abc123.getCarType().getModel() << ' ' << abc123.getTires().at(3)->getSize() << std::endl;
        
        return 0;
    }

#pragma endregion<main>
/*
CH-230-A
a10p3.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include <string>

class City
{
    private: //private data members
        std::string name;
        int population;
        std::string mayor;
        double area;
    public: // business logic methods are public
        // setter methods
        void setName(std::string& newname);
        void setpopulation(int newpopulation);
        void setMayor(std::string& newmayor);
        void setarea(double newarea);

        // getter methods
        int getpopulation();
        double getarea();

        //service method
        void print();
};
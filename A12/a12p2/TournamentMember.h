/*
CH-230-A
a12p2.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include <string>

class TournamentMember
{
private: //private types
    char firstname[37];
    char lastname[37];
    char DOB[11];
    double weight;
    int nervousnesslevel;
    static std::string location;

public:
    TournamentMember(); //empty constructor
    TournamentMember(char *, char *, char *, double, int); //parametric constructor
    TournamentMember(const TournamentMember &); //copy constructor
    /*inline setters implementation*/
    inline void setfirstname(char *newfirstname)
    {
        for (int i = 0; i < 37; i++)
        {
            firstname[i] = newfirstname[i];
        }
    };
    inline void setlastname(char *newlastname)
    {
        for (int i = 0; i < 37; i++)
        {
            lastname[i] = newlastname[i];
        }
    };
    inline void setDOB(char *newDOB)
    {
        for (int i = 0; i < 1; i++)
        {
            DOB[i] = newDOB[i];
        }
    };
    inline void setweight(double newweight) { weight = newweight; };
    inline void setnervousnesslevel(int newnervousness) { nervousnesslevel = newnervousness; };
    inline static void setlocation(std::string newlocation) {location = newlocation;};

    /*inline getters implementation*/
    inline std::string getfirstname() { return firstname; };
    inline std::string getlastname() { return lastname; };
    inline std::string getDOB() { return DOB; };
    inline double getweight() { return weight; };
    int getnervousnesslevel() { return nervousnesslevel; };
    inline static std::string getlocation() {return location;};


    void print();
    //destructor
    ~TournamentMember();
};

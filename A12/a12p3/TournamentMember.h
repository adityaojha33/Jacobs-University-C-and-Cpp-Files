/*
CH-230-A
a12p3.cpp
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
    TournamentMember(); //empty constructor of Tournament Member
    //parametric constructor of Tournament Member
    TournamentMember(char *, char *, char *, double, int); 
    //copy constructor of Tournament Member
    TournamentMember(const TournamentMember &); 
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

    ~TournamentMember();
};

class Player : public TournamentMember
{
private: //private types
    int number;
    std::string position;
    int goals;
    std::string foot;
public:
    Player(); //empty constructor of Player
    //parametric constructor of Player
    Player(char *, char *, char *, double, int, int, std::string, int, std::string);
    //copy constructor of Player
    Player(const Player &);

    /*inline setters implementation*/
    inline void setnumber(int newnumber)
    {
        number = newnumber;
    };
    inline void setposition(std::string newposition)
    {
        position = newposition;
    };
    void setgoals(int newgoals);
    inline void setfoot(std::string newfoot)
    {
        foot = newfoot;
    };
/*inline getters implementation*/
    inline int getnumber() { return number; };
    inline std::string getposition() { return position; };

    inline std::string getfoot() {return foot;};
    int getgoals();
    void print2();

    ~Player();
};


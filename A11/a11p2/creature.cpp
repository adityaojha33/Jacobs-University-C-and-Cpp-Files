/*
CH-230-A
a11p2.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>

using namespace std;

/*class of creature*/
class Creature {
	public:
		Creature();  
		void run() const;
        ~Creature();

	protected:
		int distance;
};
/*value of distance as 10*/
Creature::Creature(): distance(10)
{}    
/*run method for Creature*/
void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

Creature::~Creature()
{
    //destructor of Creature
}

/*wizard class that inherited from creature*/
class Wizard : public Creature {
	public:
		Wizard();
		void hover() const; /*hover as a property for creature*/
        ~Wizard();

	private:
		int distFactor;
};
/*value of dist factor as 3*/
Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

/*destructor of wizard*/
Wizard::~Wizard()
{
    cout << "Wizard destroyed\n";
}

/*class for Dragon inherited from creature*/
class Dragons : public Creature
{
    public:
        Dragons();
        void spitfire() const; /*spitfire as property*/
        ~Dragons();

    private:
        int fireintensity;
};

/*value of fire intensity as 8*/
Dragons::Dragons() : fireintensity(8)
{}  

void Dragons::spitfire() const
{
    cout << "Spitting fire of " << fireintensity << " intensity!\n";
}

/*destructor for Dragons*/
Dragons::~Dragons()
{
    cout << "Dragon destroyed\n";
}

/*class for witcher inherited from creature*/
class Witcher : public Creature
{
    public:
        Witcher();
        void cointoss() const; /*cointoss as property for witcher*/
        ~Witcher();

    private:
        int numberofcoins;
};
/*value of number of coins to toss as 800*/
Witcher::Witcher() : numberofcoins(800)
{}  

void Witcher::cointoss() const
{
    cout << "Toss " << numberofcoins << " coins to your Witcher!\n\n";
}

/*destructor for witcher class*/
Witcher::~Witcher()
{
    cout << "Witcher destroyed\n";
}

int main()
{ 
    cout << "Creating a Creature.\n";
    /*calling for creature*/
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    /*calling for wizard*/
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Dragon.\n";
    /*calling for dragon*/
    Dragons d;
    d.run();
    d.spitfire();

    cout << "\nWizard created a Witcher to fight the Dragon.\n";
    /*calling for witcher*/
    Witcher wit;
    wit.run();
    wit.cointoss();

    return 0;
} 

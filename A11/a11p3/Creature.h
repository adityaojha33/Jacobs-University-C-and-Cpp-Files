/*
CH-230-A
a11p3.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#ifndef __CREATURESH
#define __CREATURESH
#include <iostream>

/*class of creature*/
class Creature {
	public:
		Creature();  
		void run() const;
        ~Creature();

	protected:
		int distance;
};

/*wizard class that inherited from creature*/
class Wizard : public Creature {
	public:
		Wizard();
		void hover() const; /*hover as a property for creature*/
        ~Wizard();

	private:
		int distFactor;
};

/*class for Dragon inherited from creature*/
class Dragons : public Creature
{
    public:
        Dragons();
        void spitfire() const;  /*spitfire as property*/
        ~Dragons();

    private:
        int fireintensity;
};

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
#endif
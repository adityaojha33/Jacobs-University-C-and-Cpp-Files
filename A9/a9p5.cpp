/*
CH-230-A
a9p5.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    cout << "Guessing Game :-)" << endl;
    int answer;
    int count = 0;
    int randomNumber;
    int input;
    /*generating a random number between 1 to 100*/
    srand(static_cast<unsigned int>(time(0)));
    randomNumber = rand();
    answer = (randomNumber % 100) + 1;
    do
    {
        cout <<"Enter a number between 1 and 100" << endl;
        count++; /*increasing the count*/
        cin >> input; /*taking the input*/
        if(input< answer) /*when the input is lower than answer*/
            cout << "The input is low" << endl;
        else if(input > answer) /*when the input is higher than answer*/
            cout << "The input is high" << endl;
        else
        {
            /*when correct number is guessed*/
            cout << "Congratulations!!! You are correct" << endl;
            cout << "You got it in " << count << " tries" <<endl;
        }   
    } while(answer != input);
    /*do while loop for looping until correct answer*/

    return 0;
}
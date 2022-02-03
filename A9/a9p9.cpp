/*
CH-230-A
a9p9.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include<iostream>
using namespace std;
string replacevowel(string answer)
{
    int length = answer.length();
    for(int i = 0; i<length; i++)
    {
        /*finding vowels*/
        if(answer[i]=='a' || answer[i]=='e' || answer[i]=='i' ||
        answer[i]=='o' || answer[i]=='u' || answer[i]=='A' || answer[i]=='E'||
        answer[i]=='I' || answer[i]=='O' || answer[i]=='U')
        {
            answer[i] = '_'; /*replacing vowel with _*/
        }
    }
    return answer;
}
string randomword(string words[])
{
    /*random number is generated*/
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand();
    int aaa = (randomNumber % 15) + 1;
    return words[aaa]; /*returns the random word from array*/
}
int main()
{
    int count = 0;
    string input;
    string words[17] = {"computer", "television","keyboard", "laptop", "mouse",
    "gunslinger", "ozone", "campus", "adventure", "germany", "birthday", 
    "community", "modern", "reference", "spiderman", "manchester", "pressure"};
    while (1)
    {
        string answer = randomword(words);
        string hangman = replacevowel(answer);
        cout << "Guess the correct word from: ";
        cout << hangman <<endl; /*replaced word*/
        
        while (1)
        {
            cin >> input;
            count++; /*increasing the count*/
            if (input == answer) /*when the guess is correct*/
            {
                string again;
                cout << "Congratulations!! You are correct" << endl;
                cout << "You took " << count << " tries" << endl;
                count = 0; /*making the count 0 for next try*/
                cout << "Do you want to try again (yes/no):  ";
                cin >> again;
                /*when the user does not want to try again*/
                if (again == "no")
                {
                    exit(1);
                }
                /*when the user wants to try again then just breaking from inner loop*/
                else
                {
                    break;
                }
            }
            else if (input == "quit")
            /*when the user enters quit*/
            {
                exit(1);
            }
            else /*for incorrect guess*/
            {
                cout << "Try again" << endl;
            }
        }
    }

    return 0;
}
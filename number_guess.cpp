#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int generatedNumber, userGuess, tries = 0;
    srand(time(0));
    generatedNumber = rand() % 50 + 1;
    cout << "                                !!!Welcome To Number Guessing Game!!!\n\n";
    
    do
    {
        cout << "Enter a guess between 1 and 50 : ";
        cin >> userGuess;
        tries++;
        if(userGuess>50){
            cout<<"Invalid Number!\n";
        }
        else if (userGuess - generatedNumber>0 && userGuess-generatedNumber<=5){
            cout << "You are Close!\n";}
        else if (generatedNumber - userGuess>0 && generatedNumber - userGuess<=5){
            cout << "You are Close!\n";}
        else if (userGuess > generatedNumber)
            cout << "Too high!\n";
        
        else if (userGuess < generatedNumber)
            cout << "Too low!\n";
        else
            cout << "Correct! You got it in " << tries << " guesses!\n";
    } while (userGuess != generatedNumber );

    return 0;
}

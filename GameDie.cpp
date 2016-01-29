#include <iostream>
#include <cstdlib>
#include <ctime>
//#include "GameDie.h"
using namespace std;
//class constructor that seeds the random number generator
GameDie::GameDie()
{
}

//generate a random number between 1-6 (inclusive) and display it
void GameDie::roll()
{
    int score=(rand() %6)+1;
    cout<<"dice score is "<< score<<endl;
}

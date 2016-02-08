#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
//class constructor that seeds the random number generator
GameDie::GameDie()
{
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int die_size;
    cout<<"Enter die side in between 4 and 20 : ";
    cin>>die_size;
    cout<<endl;
    srand(static_cast<unsigned int>(time(NULL)%1000));
    //int score=(rand() %6)+1;//code for 1 and 6 die
    int score=(rand() % die_size)+1;
    return score;
}

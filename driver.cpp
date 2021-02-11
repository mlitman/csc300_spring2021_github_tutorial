#include<iostream>
#include "Dice.hpp"

using namespace std;

int main(int argc, char* argv[])
{
    Dice* d6 = new Dice(6);
    Dice* d8 = new Dice(8);
    int aRoll = d8->roll();
    cout << aRoll << endl;
    return 0;
}
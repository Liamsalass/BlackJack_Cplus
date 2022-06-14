
#include <iostream>
#include <string>
#include <array>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


using namespace std;

int main()
{
    bool cont = true;
    cout << "Welcome to BlackJack!\nTo win points you must draw cards until you have a sum of 21.\nIf you draw over 21, you lose.\nIf you draw cards less than or equal to the dealer, you also lose." << endl;
    srand(time(NULL));
    while (cont) {
        int card1 = rand() % 13 + 1;
        int card2 = rand() % 13 + 1;
        cout << "Card 1 is: " << card1 << ", and card 2 is: " << card2 <<  endl;
        



        cont = false;
    };

}


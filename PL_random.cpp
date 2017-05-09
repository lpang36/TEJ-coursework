/*
Lawrence Pang
TEJ3M1
Random program
07/04/2015
*/

#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main ()
{
     srand ( time(NULL) );
     int x;
     for (int i = 1; i<=10; i++)
     {
         x = rand() % 5 + 1;
         cout << "The number generated is " << x << endl;
     }
     cout << "We ended with the number " << x;
     cin.get();
}

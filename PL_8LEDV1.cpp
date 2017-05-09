/*
Lawrence Pang
TEJ3M1
8 LED V1
13/04/2015
*/

#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void program1 ()
{
     int i = 0;
     while (i<=255 && !kbhit())
     {
         cout << i << " ";
         i++;
         Sleep (100);
     }
     cout << "Press any key to continue." << endl;
     getch();
     getch();
     i = 255;
     while (i>=0 && !kbhit())
     {
         cout << i << " ";
         i--;
         Sleep (100);
     }
     cout << "That's all!" << endl;
     getch();
     getch();
}

void program2 ()
{
     int i = 1;
     bool up = true;
     while (!kbhit())
     {
         cout << i << " ";
         i = int (i*(3.0*up/2+1.0/2));
         if (i == 128 || i == 1)
         {
               up = !up;
         }
         Sleep (100);
     }
     cout << "That's all!" << endl;
     getch();
     getch();
}

int pow (int base, int exp)
{
     int i = 1; 
     for (int j = 1; j<=exp; j++)
     {
         i*=2;
     }
     return i;
}

void program3 ()
{
     int input;
     string output = "";
     cout << "Enter a number." << endl;
     cin >> input;
     int i = 1;
     int count = 0;
     while (i<=input)
     {
         i*=2;
         count++;
     }
     for (int j = count-1; j>=0; j--)
     {
         if (pow(2,j)<=input)
         {
               output = output + "1";
               input-=pow(2,j);
         }
         else
         {
               output = output + "0";
         }
     }
     cout << "The binary conversion is " << output << endl;
     getch();
}

void program4 ()
{
     srand ( time(NULL) );
     int x = rand() % 256;
     cout << "The generated number is " << x << endl;
     getch();
}

int main()
{
    int ch;
    do {
       system("cls");
       cout << "Enter: " <<endl<<
            "1. 0 to 255"<<endl<<
            "2. Powers of 2"<<endl<<
            "3. Decimal to binary conversion"<<endl<<
            "4. Random number generator"<<endl<<
            "Enter 0 to quit."<<endl;
       cin >> ch;
       if (ch==1)
       {
            program1();
            }
       else if (ch==2)
       {
            program2();
            }
       else if (ch==3)
       {
            program3();
            }
       else if (ch==4)
       {
            program4();
            }
    } while (ch!=0);
}

/*
Lawrence Pang
TEJ3M1
Set 2
11/02/2015
*/

#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void whileloop ()
{
     int x = 1;
     while (x<10){ //x is less than 10
           //display x;
           cout<<x<<endl;
           //increment x;
           x++;
     }
}

void variables ()
{
     int thisisanumber;
     //prompt for number
     cout<<"Please enter a number: ";
     cin>>thisisanumber;
     cin.ignore();
     //display number;
     cout<<"You entered: "<<thisisanumber<<"\n";
}

void strings ()
{
     string FirstName, LastName;
     system("cls");
     //prompt for first, last name
     cout<<"Enter your first name.";
     getline(cin,FirstName);
     cout<<"Enter your last name.";
     getline(cin,LastName);
     cout<<endl;
     //display first, last name
     cout<<"Hi "<<FirstName<<" "<<LastName<<"."<<"\n";
     cout<<"Welcome to my first C++ string program.\n\n";
     //display exit statement
     cout<<"Sadly, this program has been terminated.\n";
     cout<<"Goodbye!!";
}


void gotoxy(int x, int y)
{
     COORD coord;
     coord.X = x;
     coord.Y = y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void gotoxyProgram ()
{
     gotoxy(80,1);
     //display message at 80,1
     cout<<"I am over here!!!";
}

void forloop ()
{
     for (int x = 1; x<10; x++) //x is less than 10
     {
         //x increases by 1
         //display x
         cout<<x<<endl;
     }     
}

void dowhileloop ()
{
     int x;
     x=4;
     do{
         //x decreases by 1
         x--;
         //display x
         cout<<x<<"\n";
     }while (x>2);//x is greater than 2  
}

void decision ()
{
     int mark, total;
     float percent;
     system("cls");
     //prompt for mark and test total
     cout<<"What mark did you get? ";
     cin>>mark;
     cout<<"What was it out of? ";
     cin>>total;
     cin.ignore();
     //calculate percentage
     percent = mark*100.0/total;
     //display total mark
     cout<<"\nYour mark is "<<percent<<"% (";
     //percent is less than 50
     if (percent<50)
        //display fail message
        cout<<"Fail)";
     else
        //display pass message
        cout<<"Pass)";
}

void controllingoutput ()
{
     int mark, total;
     float percent;
     system("cls");
     //prompt for mark and test total
     cout<<"What mark did you get? ";
     cin>>mark;
     cout.width(23);
     cout<<"What was it out of?      ";
     cin>>total;
     cin.ignore();
     //calculate percentage
     percent = mark*100.0/total;
     //display total mark
     cout<<"\nYour mark is "<<percent<<"%";
     //display termination message
     cout.width(30);
     cout<<"Goodbye!\n\n";
     system("PAUSE");
}

int main()
{
    int ch;
    do {
       system("cls");
       //display menu, prompt for choice;
       cout << "Enter: " <<endl<<
            "1. While"<<endl<<
            "2. Variables"<<endl<<
            "3. Strings"<<endl<<
            "4. Gotoxy"<<endl<<
            "5. For"<<endl<<
            "6. Do While"<<endl<<
            "7. Decision"<<endl<<
            "8. Controlling Output"<<endl<<
            "Enter 0 to quit."<<endl;
       cin >> ch;
       //run programs 1-8
       if (ch==1)
       {
            whileloop();
            getch();
            }
       else if (ch==2)
       {
            variables();
            getch();
            }
       else if (ch==3)
       {
            strings();
            getch();
            }
       else if (ch==4)
       {
            gotoxyProgram();
            getch();
            }
       else if (ch==5)
       {
            forloop();
            getch();
            }
       else if (ch==6)
       {
            dowhileloop();
            getch();
            }
       else if (ch==7)
       {
            decision();
            getch();
            }
       else if (ch==8)
            controllingoutput();
    } while (ch!=0); //exit if character is 0
}

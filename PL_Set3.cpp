/*
Lawrence Pang
TEJ 3M1
Set 3
03/03/2015
*/

#include <iostream>
#include <Windows.h>

using namespace std;

void table ()
{
    int multiplier;
    //prompt for multiplier
    cout << "Multiplier: " ;
    cin >> multiplier ;
    cout << endl;
    for (int i = 1; i<=multiplier; i++) //counter is less than or equal to multiplier
    {
        //calculate 6 times the counter
        //display the result
        cout << "6 x " << i << " = " << 6*i << endl;
    }
    cin.get();
}

void factorial ()
{
    int num;
    int factorial = 1;
    //prompt for factorial input
    cout << "Enter a non-negative integer: " ;
    cin >> num;
    cout << endl;
    for (int i = num; i >= 1; i--) //counter is greater than or equal to 1
    {
        //multiply factorial by counter
        factorial = factorial*i;
        //display counter and operation
        if (i!=1)
             cout << i << " x " ;
        else
             cout << i << " = " ;
    }
    //display factorial result
    cout << factorial << endl;
    cin.get();
}

void balance ()
{
    double capital, rate, term;
    double start = 0;
    //prompt for investment, interest rate, term
    cout << "Monthly Investment          : " ;
    cin >> capital;
    cout << endl;
    cout << "Annual Interest Rate (%)    : " ;
    cin >> rate;
    //calculate monthly interest rate
    rate = rate/12.0;
    cout << endl;
    cout << "Term (Months)               : " ;
    cin >> term;
    cout << endl;
    //display table headers
    cout << "Starting        Interest        Monthly         Ending" << endl;
    cout << "Balance         Earned          Deposit         Balance" << endl;
    cout << "--------        --------        --------        --------" << endl;
    for (int i = 1; i<=term; i++) //counter is less than or equal to term
    {
        //display current balance, interest, deposit, and updated balance
        cout << start << "\t\t" ;
        //calculate interest
        cout << start*rate/100.00 << "\t\t" ;
        cout << capital << "\t\t" ;
        //calculate updated balance
        start = start + capital + start*rate/100.00;
        cout << start << "\t\t" << endl;
    }
    cin.get();
}

void hilo ()
{
    //calculate random number
    srand (time(NULL));
    int num = rand()%100+1;
    int guess = 0;
    //prompt for guess
    cout << "Guess the number." << endl;
    cin >> guess;
    while (guess != num) //guess is not equal to random number
    {
         if (guess > num) //guess is greater than random number
             //prompt to guess a lower number
             cout << "Lower. Try again." << endl;
         else if (guess < num) //guess is less than random number
             //prompt to guess a higher number
             cout << "Higher. Try again." << endl;
         cin >> guess; 
    }
    //display congratulations message
    cout << "Congratulations! You've guessed the number, " << num << "." << endl;
    cin.get();
}

int main()
{
    int ch;
    //display menu, prompt for choice
    do {
       cout << "Enter 1 for table program, 2 for factorial program, 3 for balance program, 4 for hi-lo game, and 0 to exit." <<endl;
       cin >> ch;
       //run programs 1-4
       if (ch==1)
            table();
       else if (ch==2)
            factorial();
       else if (ch==3)
            balance();
       else if (ch==4)
            hilo();
    } while (ch!=0); //choice is not equal to 0
}

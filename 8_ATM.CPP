/*          Implement a C++ program that simulates a simple ATM machine,
 allowing users to check their balance, deposit,or withdraw money using a switch statement. */

#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    int n,a, r,w, d, t,choice;

    start:

    cout<<"\n\nENTER YOUR ACCOUNT NO.";
    cin>>n;
    if (n<=1000 || n>=9999)
    {
        cout<<" INVALID NO.! ENTER 4 DIGIT NO.";
        goto start;
        return 0;
    }
    
    srand((int) time(NULL));
    r = rand()%10000;
    sleep(2);

    menu:

    cout<<"\n\nWHAT U WANT TO DO ?\n";
    cout<<"1. Withdrow Money\n";
    cout<<"2. Check Money\n";
    cout<<"3. Deposit Blance\n";
    cout<<"4. Transfer Money\n";
    cout<<"5. Exit\n";
    cin>>choice;

    

    switch (choice)
    {
    case 1:

        cout<<"HOW MUCH MONEY U WANT TO WITHDROW : ";
        cin>>w;
        sleep(2);

        cout<<"MONEY WITHDROW SUCCESSFULLY \n";
        r = r - w;
        cout<<"\nNOW YOU HAVE "<< r<<" IN YOUR BANK ACCOUNT";
        break;

    
    case 2:

        cout<<"YOUR ACCOUNT HAVE : "<<"$"<<r;
        break;

    
    case 3:

        cout<<"HOW MUCH MONEY U WANT TO DEPOSIT : ";
        cin>>d;
        r+=d;
        cout<<"\n\nMONEY DEPOSIT SUCCESSFULLY\n ";
        cout<<"NOW YOU HAVE "<< r<<" IN YOUR BANK ACCOUNT";
        break;

    
    case 4:

        cout<<"YOUR ACCOUNT HAVE : "<<"$"<<d<<"\n";
        
        cout<<"\nENTER  THE ACCOUNT NUMBER U WANT TRASFER: ";
        cin>>a;
        sleep(1);

        cout<<"\nHOW MUCH MONEY U WANT TO TRANSFER : ";
        cin>>t;
        sleep(1);

        r-=t;

        cout<<"MONEY TRANSFER SUCCESSFULLY \n";
        cout<<"\nNOW YOU HAVE "<< r<<" IN YOUR BANK ACCOUNT ";
        break;
    
    case 5:
        cout<<"Thank you for choosing us :) \n";
        return 0;
    default:
     cout<<"INVALID CHOICE";
    
     break;
    }
    sleep(1);
    goto menu;

  return 0; 
}

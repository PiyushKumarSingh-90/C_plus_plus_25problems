//Implement a program that finds the largest among three numbers using nested if-else statements.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout<<"\n\nEnter the 1st no. : ";
    cin>>num1;

    cout<<"Enter the 2nd no. : ";
    cin>>num2;

    cout<<"Enter the 3rd no. : ";
    cin>>num3;

    if (num1>num2)
    {
        if (num1>num3)
        {
            cout<<"\n\n"<<num1<<"\n\n is the largest no.";
        }
        else
        {
            cout<<"\n\n"<<num3<<" is the largest no.";

        }
    }

    else
    {
        if (num2>num1)
        {
            if (num2>num3)
            {
                cout<<"\n\n"<<num2<<" is largest no.";
            }
            else
            {
                cout<<"\n\n"<<num3<<" is largest no.";
            }
        }
    }    

return 0;
}

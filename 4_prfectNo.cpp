// Write a program that checks if a number is a perfect number.

#include <iostream>

using namespace std;

int main()
{
    int n, sum=0;

    cout<<"\nEnter the no. u want to know it PERFECT or NOT : ";
    cin>>n; 

    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            sum+=i;
        }
        
    }

    if (sum==n)
    {
        cout<<"\n\n"<<n<<" is a PERFECT NO.\n";

    }
    else
    {
       cout<<"\n\n"<<n<<" is NOT A PERFECT NO.\n";
    }

    return 0;

}
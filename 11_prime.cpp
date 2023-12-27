// Write a C++ program to check if a number is prime or composite.

#include <iostream>
using namespace std;

int main()
{
    start:
    int n ,a=0;

    cout<<"\n\nENTER NO. U WANT TO KNOW IT PRIME OR COMPOSIT : ";
    cin>>n;

    if (n==0)
    {
        cout<<"0 is not a PRIME nor a COMPOSIT no. ";
        return 0;
    }
    

    for (int i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            a+=1;
        }
    }

    if (a>2)
    {
        cout<<n<<"\n it's a COMPOSIT NO.";
    }

    else
    {
        cout<<n<<"\n it's a PRIME NO.";
    }
    goto start;
    
return 0;
}
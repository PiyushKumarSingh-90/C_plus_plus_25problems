// implement a program to find the GCD of two numbers using a for loop.

#include <iostream>

using namespace std;

int main()
{
    int n1,n2,max;

    cout<<"\n\nEnter 1st number : ";
    cin>>n1;

    cout<<"\nEnter 2nd number : ";
    cin>>n2;


    cout<<"\nfactor of "<<n1<<" is : ";
    
    for (int i = 1; i <=n1; i++)
    {
        if (n1%i==0)
        {
           cout<<i<<"  ";
        }
        
    }

    cout<<"\nfactor of "<<n2<<" is : ";
    for (int j = 1; j <=n2; j++)
    {
        if (n2%j==0)
        {
            cout<<j<<"  ";
        }
        
    }

    for (int k = 1; k <=n2; k++)
    {
        if (n1%k==0 && n2%k==0)
        {
            max=k;
        }
        
    }
    
    cout<<"\n\nGCD of "<<n1<<" & "<<n2<<" is : "<<max;
 return 0;  
}
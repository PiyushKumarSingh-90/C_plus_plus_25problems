//Create a program to calculate the power of a number using a loop.

#include <iostream>
using namespace std;

int main()
{
    int n ,p; 
    long ans = 1;

    cout<<"\nEnter the no. u want to know the power of : ";
    cin>>n;

    cout<<"\nEnter POWER : ";
    cin>>p;

    for (int i = 1; i <= p; i++)
    {
        ans=ans * n;
    }
    cout<<"\npower is : "<<ans;
    


return 0;

}
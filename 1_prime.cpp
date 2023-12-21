#include<iostream>

using namespace std;

int main()
{
    int n ,a=0;

    cout<<"Enter no. :";
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            a+=1;
        }
    }
        if (a>2)
        {
           cout<<n <<" Not a prime no. ";
        }
        
        else
        {
            cout<<n <<" is prime no. ";
        }
        

return 0;
}
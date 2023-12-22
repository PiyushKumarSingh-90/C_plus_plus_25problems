//Implement a program to print the multiplication table of a given number.

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the no. u want to know the table of : ";
    cin>>n;

    for (int i = 1; i <=10; i++)
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<"\n";
    }
    return 0;
    
}
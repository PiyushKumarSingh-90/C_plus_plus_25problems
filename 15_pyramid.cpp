//  implement a program that generates a pattern of a pyramid using nested loops

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Enter the no. of lines : ";
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
        for (int j =n; j>=i; j--)
        {
            cout<<" ";
        }
        
        for (int k = 1; k <=i; k++)
        {
           cout<<" *";
        }
        cout<<"\n";
    }
  return 0;  
}

//Write a C++ program to display the Fibonacci sequence up to N terms

#include <iostream>

using namespace std;

int main()
{
  int n,a=1,b=1,series=0;

  cout<<"Enter the no. u want know the fibonacci of : ";
  cin>>n;
   
   cout<<"series is :\n"<<a <<"\n"<<b<<"\n";

   for (int i = 1; i <=n; i++)
   {
    series = a+b;
    a=b;
    b=series;

    cout<<series<<"\n";
   }
   return 0;
}
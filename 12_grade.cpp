//Implement a program that determines the grade of a student based on their marks of 5 subject

#include <iostream>
using namespace std;

int main()
{
    int m,p,c,e,ave,sum;
    string name;

    cout<<"\n\nSTUDENT NAME : ";
    cin>>name;

    cout<<"\nMARKS OF MATH : ";
    cin>>m;

    cout<<"\nMARKS OF PHYSICS : ";
    cin>>p;

    cout<<"\nMARKS OF CHEMISTRY  : ";
    cin>>c;

    cout<<"\nMARKS OF ENGLISH : ";
    cin>>e;

   sum =m+p+c+e;
   ave=sum/4;

    cout<<"\nYOUR TOTAL AVERAGE MARKS IS : "<<ave;

    if (ave>=95 && ave<=100)
    {
        cout<<"\n Grade : 'A1' ";
    }
    else if (ave>=90 && ave<=95)
    {
        cout<<"\n Grade : 'A2' ";
    }

    else if (ave>=85 && ave<=90)
    {
        cout<<"\n Grade : 'B1' ";
    }

    else if (ave>=80 && ave<=85)
    {
       cout<<"\n Grade : 'B2' ";
    }

    else if (ave>=70 && ave<=80)
    {
        cout<<"\n Grade : 'C1' ";
    }

    else if (ave>=60 && ave<=69)
    {
        cout<<"\n Grade : 'C2' ";
    }

    else if (ave>=50 && ave<=59)
    {
        cout<<"\n Grade : 'C3' ";
    }

    else if (ave>=40 && ave<=49)
    {
        cout<<"\n Grade : 'D' ";
    }

    else if (ave>=35 && ave<=39)
    {
        cout<<"\n Grade : 'E' ";
    
    }

    else
    {
        cout<<"\n AAP APNE GHAR JA RAHE HO :)";
    }
    

return 0;
}
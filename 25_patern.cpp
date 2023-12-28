/* Create a C++ program to print the following pattern:

***** 

*  *

*  *

*  *

***** */


#include <iostream>
using namespace std;

int main()
{
    cout<<"\n";

    for (int i = 1; i <=1; i++)
    {
        for (int j = 1; j <=5; j++)
        {
           cout<<"*";
        }
        cout<<"\n\n";
    }
        
    for (int k = 1; k <=3; k++)
    {
        for (int l = 1; l <=2 ;l++)
        {
            cout<<"*"<<"  ";
        }
        cout<<"\n\n";
        
    }

     for (int m = 1; m <=1; m++)
    {
        for (int n = 1; n <=5; n++)
        {
           cout<<"*";
        }
        
    }
 return 0;   
}



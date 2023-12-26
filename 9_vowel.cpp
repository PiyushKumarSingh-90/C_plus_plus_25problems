// Create a program to check if a character is a vowel or consonant.

#include <iostream>
using namespace std;

int main()
{
    char c;

    start:

    cout<<"\n\nWHICH LETTER U WANT TO KNOW IT VOWEL OR CONSONENT : \n";
    cin>>c;

    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        cout<<"\nit's a VOWEL";
    }
    else
    {
        cout<<"\nit's a CONSONENT";
    }
    goto start;
    
 return 0;   
}
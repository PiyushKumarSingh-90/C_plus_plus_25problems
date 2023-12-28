//Implement a program to reverse an array in-place.

#include <iostream>  
using namespace std;  

int main ()  
{  
    int arr[100];
    int n,t; 
    int i, j;


    cout << " Enter the size of the array: ";  
    cin >> n;  
    for (i = 0; i < n; i++)  
    {  
        cout << " Enter the element " << i+1 << ": ";  
        cin >> arr[i];  
    }  
    for ( i = 0, j = n - 1; i < n/2; i++, j--)  
    {     
        t = arr[i];  
        arr[i] = arr[j];  
        arr[j] = t;  
    }  
    cout << "Reverse all elements of the array: " << endl;  
//to print the array
    for ( i = 0; i < n; i++)  
    {  
        cout << arr[i] << " ";  
    }  
    return 0;  
}
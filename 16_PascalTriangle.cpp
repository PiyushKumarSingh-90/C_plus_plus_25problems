// Implement a program to print a Pascal's triangle using nested loops.

#include <iostream>
using namespace std;

// main function
int main() {

    // input a number from user
    int n;
    cout << "Enter number: ";
    cin >> n;

    while (n <= 0) 
    {
        cout << "Invalid number" << endl;
        cout << "Enter number: " << endl;
        cin >> n;
    }

    // displaying the pattern
    cout << "The pattern is: " << endl << endl;

    for (int i = 1; i <= n; i++) {
        int num = 1;
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << num << " ";
            num = num * (i - k) / k;
        }
        cout << endl;
    }

    return 0;
}


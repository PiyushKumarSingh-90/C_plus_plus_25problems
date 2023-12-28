#include <iostream>
using namespace std;

int main() {
    string input;
    int choice;
    
    do {
        cout << "Please enter a string: ";
        cin >> input;

        int left = 0;
        int right = input.length() - 1;
        bool isPalindrome = true;

        while (left < right) 
        {  
            if (input[left] != input[right]) 
            {
                isPalindrome = false;
                break; 
            }
            left++;
            right--;
        }

        if (isPalindrome==true) 
        {
            cout << "It is a palindrome";
        } else 
        {
            cout << "Not a palindrome";
        }

        cout << endl << "Check for another? " << endl;
        
        do {
            cout << "Press 1 for yes, 2 for No" << endl;
            cin >> choice;

            if (choice != 2 && choice != 1) 
            {
                cout << "Please enter a valid response" << endl;
            }
        } while (choice != 2 && choice != 1);

        if (choice == 2) 
        {
            cout << "Thank you for using this program, have a great day!! ";
            break;
        }
    } while (true);

    return 0;
}

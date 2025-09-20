#include <iostream>
using namespace std;

int main() {
    
    int n = 6;

    for (int i = 0; i<n; i++) {
        char ch = 'A';
        for (int j=0; j<n; j++) {
            // cout << j; --> number 
            // cout << "*"; // --> star Pattern
            cout << ch;
            ch += 1;
        }
        cout<< endl;
    }

    return 0;
}
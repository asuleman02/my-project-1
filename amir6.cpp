#include <iostream>
using namespace std;

int main() {

    int password;
    int correctPassword = 12345;

    cout << "Enter password: ";
    cin >> password;

    while (password != correctPassword) {
        cout << "Incorrect! Try again: ";
        cin >> password;
    }

    cout << "Welcome to the Secure Area!" << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {

    int password;
    int correctPassword = 12345;
    int attemptsLeft = 5;

    while (attemptsLeft > 0) {

        cout << "Enter password: ";
        cin >> password;

        if (password == correctPassword) {
            cout << "Welcome to the Secure Area!" << endl;
            return 0; // exit program
        }

        attemptsLeft--;
        if (attemptsLeft > 0) {
            cout << "Wrong password! Attempts remaining: " << attemptsLeft << endl;
        }
    }

    // If reached here → all attempts failed
    cout << "Too many failed attempts! The authorities have been alerted!" << endl;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {

    string answer;

    cout << "What is the capital of France? ";
    getline(cin, answer);

    // Convert to lowercase for case-insensitive comparison
    for (char &c : answer) {
        c = tolower(c);
    }

    if (answer == "paris") {
        cout << "Correct! Well done." << endl;
    } else {
        cout << "Wrong answer!" << endl;
    }

    return 0;
}

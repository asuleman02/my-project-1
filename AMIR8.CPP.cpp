#include <iostream>
#include <string>
using namespace std;

int main() {

    string names[6] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    string searchTerm = "Sam";

    bool found = false;

    for (int i = 0; i < 6; i++) {
        if (names[i] == searchTerm) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "The name '" << searchTerm << "' was found in the list!" << endl;
    } else {
        cout << "'" << searchTerm << "' was NOT found in the list!" << endl;
    }

    return 0;
}

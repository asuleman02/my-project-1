#include <iostream>
using namespace std;

int main() {

    // 1. Count up from 0 to 50 (increments of 1)
    cout << "Counting up from 0 to 50:" << endl;
    for (int i = 0; i <= 50; i++) {
        cout << i << " ";
    }
    cout << endl << endl;

    // 2. Count down from 50 to 0 (decrements of 1)
    cout << "Counting down from 50 to 0:" << endl;
    for (int i = 50; i >= 0; i--) {
        cout << i << " ";
    }
    cout << endl << endl;

    // 3. Count up from 30 to 50 (increments of 1)
    cout << "Counting up from 30 to 50:" << endl;
    for (int i = 30; i <= 50; i++) {
        cout << i << " ";
    }
    cout << endl << endl;

    // 4. Count down from 50 to 10 (decrements of 2)
    cout << "Counting down from 50 to 10 (step -2):" << endl;
    for (int i = 50; i >= 10; i -= 2) {
        cout << i << " ";
    }
    cout << endl << endl;

    // 5. Count up from 100 to 200 (increments of 5)
    cout << "Counting up from 100 to 200 (step +5):" << endl;
    for (int i = 100; i <= 200; i += 5) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

string toLowerCase(string s) {
    for (char &c : s) c = tolower(c);
    return s;
}

int main() {

    const int SIZE = 10;

    string questions[SIZE] = {
        "What is the capital of France?",
        "What is the capital of Germany?",
        "What is the capital of Spain?",
        "What is the capital of Italy?",
        "What is the capital of Portugal?",
        "What is the capital of Belgium?",
        "What is the capital of Netherlands?",
        "What is the capital of Switzerland?",
        "What is the capital of Austria?",
        "What is the capital of Poland?"
    };

    string answers[SIZE] = {
        "paris",
        "berlin",
        "madrid",
        "rome",
        "lisbon",
        "brussels",
        "amsterdam",
        "bern",
        "vienna",
        "warsaw"
    };

    int score = 0;

    for (int i = 0; i < SIZE; i++) {

        string userAnswer;
        cout << questions[i] << " ";
        getline(cin, userAnswer);

        if (toLowerCase(userAnswer) == answers[i]) {
            cout << "Correct!\n";
            score++;
        } else {
            cout << "Wrong! The correct answer is: " << answers[i] << "\n";
        }
        cout << endl;
    }

    cout << "Quiz finished! Your score: " << score << " / " << SIZE << endl;

    return 0;
}

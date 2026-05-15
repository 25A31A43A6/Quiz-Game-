#include <iostream>
using namespace std;

int main() {

    char answer;
    int score = 0;

    cout << "===== QUIZ GAME =====" << endl;

    // Question 1
    cout << "\n1. What is the capital of India?" << endl;
    cout << "a) Mumbai" << endl;
    cout << "b) Delhi" << endl;
    cout << "c) Chennai" << endl;
    cout << "d) Kolkata" << endl;

    cout << "Enter Answer: ";
    cin >> answer;

    if(answer == 'b' || answer == 'B') {
        cout << "Correct Answer!" << endl;
        score++;
    }
    else {
        cout << "Wrong Answer!" << endl;
    }

    // Question 2
    cout << "\n2. Which language is used for C++?" << endl;
    cout << "a) Programming" << endl;
    cout << "b) Markup" << endl;
    cout << "c) Styling" << endl;
    cout << "d) Database" << endl;

    cout << "Enter Answer: ";
    cin >> answer;

    if(answer == 'a' || answer == 'A') {
        cout << "Correct Answer!" << endl;
        score++;
    }
    else {
        cout << "Wrong Answer!" << endl;
    }

    // Question 3
    cout << "\n3. Who is known as the Father of Computers?" << endl;
    cout << "a) Charles Babbage" << endl;
    cout << "b) Newton" << endl;
    cout << "c) Einstein" << endl;
    cout << "d) Alan Turing" << endl;

    cout << "Enter Answer: ";
    cin >> answer;

    if(answer == 'a' || answer == 'A') {
        cout << "Correct Answer!" << endl;
        score++;
    }
    else {
        cout << "Wrong Answer!" << endl;
    }

    // Question 4
    cout << "\n4. Which symbol is used for comments in C++?" << endl;
    cout << "a) //" << endl;
    cout << "b) ##" << endl;
    cout << "c) **" << endl;
    cout << "d) @@" << endl;

    cout << "Enter Answer: ";
    cin >> answer;

    if(answer == 'a' || answer == 'A') {
        cout << "Correct Answer!" << endl;
        score++;
    }
    else {
        cout << "Wrong Answer!" << endl;
    }

    // Question 5
    cout << "\n5. Which company developed C++?" << endl;
    cout << "a) Microsoft" << endl;
    cout << "b) Apple" << endl;
    cout << "c) Bell Labs" << endl;
    cout << "d) Google" << endl;

    cout << "Enter Answer: ";
    cin >> answer;

    if(answer == 'c' || answer == 'C') {
        cout << "Correct Answer!" << endl;
        score++;
    }
    else {
        cout << "Wrong Answer!" << endl;
    }

    // Final Result
    cout << "\n===== RESULT =====" << endl;
    cout << "Your Score: " << score << "/5" << endl;

    if(score == 5)
        cout << "Excellent!" << endl;
    else if(score >= 3)
        cout << "Good Job!" << endl;
    else
        cout << "Better Luck Next Time!" << endl;

    return 0;
}

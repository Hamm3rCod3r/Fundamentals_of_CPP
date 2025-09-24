
#include <iostream>
#include <cstdlib> 
#include <ctime>  
using namespace std;

void main() {

    srand(static_cast<unsigned>(time(0)));


    int num1 = rand() % 100 + 1;
    int num2 = rand() % 100 + 1;
    int correctSum = num1 + num2;
    int userAnswer;
    int attempts = 0;

    cout << "Welcome to the guessing game!\n";
    cout << "What is the sum of " << num1 << " + " << num2 << "?\n";

    while (attempts < 3) {
        cout << "Enter your answer: ";
        cin >> userAnswer;

        if (userAnswer == correctSum) {
            if (attempts == 0) {
                cout << "Congratulations, you scored 100%.\n";
            }
            else if (attempts == 1) {
                cout << "Congratulations, you scored 66%.\n";
            }
            else {
                cout << "You scored 33%.\n";
            }

        }
        else {
            cout << "Wrong, please enter your answer again.\n";
        }

        attempts += 1;
    }


    cout << "Better luck next time.\n";

    system("pause");
}

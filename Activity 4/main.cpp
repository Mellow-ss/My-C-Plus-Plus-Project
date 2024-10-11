#include <iostream>
using namespace std;

float num1, num2, num3, num4, num5, num6, num7, num8;
float average;

int main(){

    cout << "Enter your grade in English: ";
    cin >> num1;
    cout << "Enter your grade in Science: ";
    cin >> num2;
    cout << "Enter your grade in Math: ";
    cin >> num3;
    cout << "Enter your grade in A.P: ";
    cin >> num4;
    cout << "Enter your grade in P.E: ";
    cin >> num5;
    cout << "Enter your grade in Art: ";
    cin >> num6;
    cout << "Enter your grade in Music: ";
    cin >> num7;
    cout << "Enter your grade in Health: ";
    cin >> num8;

    average = (num1 + num2 + num3 +num4 + num5 + num6 + num7 + num8) / 8;

    if (average >= 90) {
        cout << average << " Excellent";
    }
    else if (average >= 80) {
        cout << average << " Very Good";
    }
    else if (average >= 70) {
        cout << average << " Good";
    }
    else if (average >= 60) {
        cout << average << " Needs Improvement";
    }
    else if (average < 60) {
        cout << average << " Failing Grade";
    }
    return 0;
}

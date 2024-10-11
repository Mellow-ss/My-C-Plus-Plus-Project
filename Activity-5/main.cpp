#include <iostream>
using namespace std;

int main(){

  char operations;
  int n1, n2;

  cout << "Enter your first number: ";
  cin >> n1;
  cout << "Enter your second number: ";
  cin >> n2;
  cout << "Enter an operation (+, -, *, /): ";
  cin >> operations;

  switch (operations) {
  case '+':
     cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
    break;
  case '-':
     cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
    break;
  case '*':
     cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
    break;
  case '/':
    if (n2 != 0) {
     cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
    } else {
     cout << "Error: Division by zero!" << endl;
  } break;
  default:
     cout << "Invalid Operator" << endl;
  }
  return 0;
}

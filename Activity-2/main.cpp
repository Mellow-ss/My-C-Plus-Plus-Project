#include <iostream> //header
using namespace std; //namespace

//variables
float num1, num2, num3;
float sum;

//main
int main()
{
//decleration
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

//operation
    sum = num1 + num2;

//display
  cout << "The sum of " << num1 << " and " << num2 << " is "  << sum << endl;
  cout << "Enter a number to subtract from the sum: ";
  cin >> num3;
  cout << "the result after subtracting " << num1 << " from the sum is " << sum - num3 << endl;

    return 0;
}

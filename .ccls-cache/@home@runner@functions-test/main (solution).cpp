#include <iostream>
using namespace std;

void sayHello() {
  string name;
  cout << "please enter your first name: ";
  cin >> name;
  cout << "hello " << name << "\n";
}

int whichIsBigger(int num1, int num2) {
  int biggestNumber;

  if (num1 - num2 <= 0) {
    biggestNumber = num2;
  } else
    biggestNumber = num1;

  return biggestNumber;
}

bool sumIsEven(int num1, int num2) {
  bool even;
  if ((num1 + num2) % 2 == 0) {
    even = true;
  } else
    even = false;

  return even;
}

int main() {
  int number1;
  int number2;

  sayHello();
  cout << "please enter a number between 0 and 400: ";
  cin >> number1;
  cout << "\nplease enter another number between 0 and 400: ";
  cin >> number2;

  cout << "of the two number you entered " << whichIsBigger(number1, number2)
       << " is the biggest,\n";

  if (sumIsEven(number1, number2)) {
    cout << "and the sum of the two numbers is EVEN";
  } else
    cout << "and the sum of the tow numbers is ODD";

  return 0;
}
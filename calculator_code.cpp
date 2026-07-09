#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int d;

    cout << "do you want to compare two value (enter: 1)\n or just operate on one value (enter: 2)\n";
    cin >> d;

    if (d == 1) {
        int a, b;

        cout << "Enter value 1: ";
        cin >> a;

        cout << "Enter value 2: ";
        cin >> b;

        cout << "The values are " << a << " and " << b << endl;

        int c;

        cout << "Now, here are the options for calculations:\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";

        cout << "Choose according to no: ";
        cin >> c;

        if (c == 1) {
            cout << "The addition is: " << a + b;
        }
        else if (c == 2) {
            cout << "The subtraction is: " << a - b << " or " << b - a;
        }
        else if (c == 3) {
            cout << "The multiplication is: " << a * b;
        }
        else if (c == 4) {

            if (b != 0) {
                cout << "a / b = " << (float)a / b << endl;
            }
            else {
                cout << "sorry but we can not execute a / b because b is 0" << endl;
            }

            if (a != 0) {
                cout << "b / a = " << (float)b / a << endl;
            }
            else {
                cout << "sorry but we can not execute b / a because a is 0" << endl;
            }
        }
        else {
            cout << "Wrong input. Please run the code again.";
        }
    }

    else if (d == 2) {

        int e, f;

        cout << "Enter a value : ";
        cin >> e;

        cout << "now what u want us to do?\n";
        cout << "1. square\n";
        cout << "2. squareroot\n";

        cin >> f;

        if (f == 1) {
            cout << "Square of it is: " << pow(e, 2);
        }
        else if (f == 2) {

            if (e >= 0) {
                cout << "The square root of it is: " << sqrt(e);
            }
            else {
                cout << "Square root of negative numbers is not possible in this calculator.";
            }
        }
        else {
            cout << "please enter the right no....";
        }
    }

    else {
        cout << "please enter the right no.....";
    }

    return 0;
}
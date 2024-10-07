/* CALCULATOR */
#include <iostream>
#include <conio.h>
using namespace std;

int num1, num2;
double fnum1, fnum2;
char repeat, op;

int main() {
    do{
        system("cls"); // Clear Screen
        cout << "\t\tBASIC CALCULATOR\n" << endl;
        cout << "Choose a symbol to perform the selected operation\n[+ (add) | - (sub) | * (mul) | / (div) | % (mod) | ~ (ave)]: ";
        op = getche();

        cout << "\n\nEnter First Number: ";
        cin >> num1;

        cout << "Enter Second Number: ";
        cin >> num2;

        cout << endl;

        switch(op) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
                break;
            case '/':
                fnum1 = num1;
                fnum2 = num2;
                cout << num1 << " / " << num2 << " = " << fnum1/fnum2 << endl;
                break;
            case '%':
                cout << num1 << " % " << num2 << " = " << num1%num2 << endl;
                break;
            case '~':
                cout << "The Average of " << num1 << " and " << num2 << " is: " << (num1+num2)/2 << endl;
                break;
            default:
                cout << "You Select the invalid operation!!!" << endl; 
                break;
        }
        cout << "\nPress 'r' to repeat the program (else exit the program)" << endl;
        repeat = getche();
    }while(repeat == 'r' || repeat == 'R');
    return 0;
}
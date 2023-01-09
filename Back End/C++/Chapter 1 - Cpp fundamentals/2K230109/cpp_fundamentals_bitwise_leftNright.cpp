// Cpp fundamentals

//Bitwise operator
// << --> left shift
// >> --> Right shift
// &  --> And
// |  --> Or
// ^  --> XOR
// !  --> Not


#include<iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "\nEnter 1st number: ";
    cin >> num1;

    cout << "Enter 2nd number: ";
    cin >> num2;

    //left shift
    int lshift = num1 << num2;
    //cout << "\nLeft Shift Operator [ " << num1 " << " << num2 " = " << a << " ] \n";
    cout << "\nLeft Shift Operator: [ " << num1 << " << " << num2 << " = " << lshift << " ]\n";

    //right shift
    int rshift = num2 >> num2;
    cout << "\nRight Shift operator: [" << num1 << " >> " << num2 << " = " << rshift << " ]\n";

    //And
    int andopt = num1 & num2;
    cout << "\nAnd operator: [" << num1 << " & " << num2 << " = " << andopt << "]\n";

    //Or
    int oropt = num1 | num2;
    cout << "\nOr operator: [ " << num1 << " | " << num2 << " = " << oropt << " ]\n";

    //XOR operator
    int xoropt = num1 ^ num2;
    cout << "\nXOR operator: [" << num1 << " ^ " << num2 << " = " << xoropt << " ]\n";

    //Not operator
    int notopt = !num1;
    cout << "\nNot operator: [" << " !" << num1 << " = " << notopt<<" ]\n";

    return 0;
}

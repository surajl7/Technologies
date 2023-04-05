// Programming Exercise 3.3

/* 
Write a program to print the follwing output using for loop
1
22
333
4444
55555
......
*/

#include<iostream>
using namespace std;

int main()
{
    int count;

    cout << "\nEnter the count of numbers: ";
    cin >> count;

    for(int i = 1; i < count+1; i++){
        for(int j = 0; j < i; j++){
            cout << i;
        }
        cout << "\n";
    }

    return 0;
}
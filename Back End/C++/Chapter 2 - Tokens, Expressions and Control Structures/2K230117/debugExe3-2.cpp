// 3.2 Identify the error in the following program 

#include<iostream>
using namespace std;

int main()
{
    int num[] = {1,2,3,4,5,6};
    num[1] = [1]num ? cout << "Success" : cout << "Error";
    return 0;
}

// Solution -->


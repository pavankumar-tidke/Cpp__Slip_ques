#include <iostream>

using namespace std;


int main() {

    int a = 3;
    int* b = &a;

    // & --> (Address of) operator
    cout << "The address of a is: " << &a << endl;
    cout << "The address of a is: " << b << endl;
    cout << "The value of a: " << a << endl;

    // *b--> Dereferencing of 
    cout << "The value of a: " << *b << endl;

    system("pause");

    return 0;
}
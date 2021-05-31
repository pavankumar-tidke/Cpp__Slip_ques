// Slip 19 
// Q.1) a) Create a C++ class Number with integer data member. Write necessary member functions to overload 
// the operator unary pre and post increment ++'. 


#include <bits/stdc++.h>
using namespace std;

class Number{
    int num;

    public:
        Number(int n): num(n){}

        int operator ++() {
            return ++num;
        }
        int operator --() {
            return --num;
        }
};

int main() {
    Number n1(5);
    cout<< ++n1 << endl;
    cout<< --n1 <<endl;

    return 0;
}
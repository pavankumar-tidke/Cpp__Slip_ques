#include <iostream>
#include <string>
using namespace std;

inline void minmax(int a, int b) {
    (a<b) ? cout << a << " is less then "<< b << endl : cout << a << " is greater then " << b;
}

int main() {

    minmax(2, 5);

    // this 

    return 0;
}
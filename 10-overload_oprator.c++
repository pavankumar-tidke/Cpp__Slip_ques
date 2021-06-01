#include <bits/stdc++.h>    
using namespace std;

class base {
    public:



};

int main() {
     

    return 0;
}



// ## WITH FIREND OPERATOR OVERLOAD ## ///////

// class base {

//         int x, y;

//     public:
//         base(int a, int b): x(a), y(b){};

//         friend int operator +(base &b1, base &b2);
// };

// int operator +(base &b1, base &b2) {
//     b1.x = b1.x + b2.x;
//     b1.y = b1.y + b2.y;

//     return b1.x+b1.y;
// }

// int main() {

//     base b1(2, 4), b2(4, 6);

//     cout<< b1+b2;


//     return 0;
// }
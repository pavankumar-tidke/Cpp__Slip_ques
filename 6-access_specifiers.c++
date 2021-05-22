#include <iostream>
#include <string>
using namespace std;


class access {

    public: 
        int a = 3;
        string str = "pavankumar";
    
    private: 
        int b = 5;
        string str2 = "THis is private access specifiers";
    
    protected:
        int c = 78;
        string str3 = "THis is protected.";

    
};



int main() {
    access obj;

    // Accessing public members
    cout << "this is public :- " << obj.a << " And string :- " << obj.str << endl;

    // Accessing private members
    // cout << "This is privet :- " << obj.b;

    // Accessing protected members
    // cout << "This is protected :- " << obj.c;

    return 0;
}

// Slip 22 
// Q.1) a) Create a C++ class MyString with data member character pointer. Write a C++ program to accept and 
// display a string. Overload '+' operator to concatenate two strings. 

#include <bits/stdc++.h>
using namespace std;

class MyString {
    string str1, str2;
    
    public:
        MyString(string s1, string s2): str1(s1), str2(s2){}

        string operator +(){
            return str1 + str2;
        }
};

int main(){
    MyString s1("THis ", "string");

    cout<< +s1;

    return 0;
}
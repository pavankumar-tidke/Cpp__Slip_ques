#include <iostream>
#include <string>
using namespace std;

int sum(int x, int y) {
    return x+y;
}

float sum(float x, float y) {
    return x+y;
}

string sum(string str1, string str2) {
    return str1+str2;
}


int main() {
    // float a = 4.2;
    // float b = 2.5;

    int result = sum(4, 6); 
    cout << result;


    

    return 0;
}
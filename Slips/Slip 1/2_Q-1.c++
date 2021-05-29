#include <bits/stdc++.h>
using namespace std;

void volume(double r, double h) {
    // Volume of cylinder
    cout<< "The volume of cylinder :- "<< 3.14*r*r*h << endl;

    cout<< "The volume of cone :- "<< 3.14*r*r*(h/3)<< endl;

    cout<< "The volume of sphere :- "<< 3.14*r*r*r*(4/3)<< endl;

}

// 3.14*r*r*(h/3)

int main(){

    volume(5, 10);

    return 0;
}
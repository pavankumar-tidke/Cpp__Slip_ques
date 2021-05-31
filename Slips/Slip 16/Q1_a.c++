// Slip 16
// Q.1 a)
// Create a C++ class MyMatrix. Write a C++ program to accept and display a Matrix. Overload binary'-' 
// operator to calculate subtraction of two matrices. 


#include <bits/stdc++.h>
using namespace std;

class MyMatrix {

    public:
        int mtrix[2][3] = {{9,6,8}, {2,3,2}}, newMtr[3];

        void operator -() {
            int j,m;
            for(int i=0; i<=2;i++) {
                newMtr[i] = mtrix[0][i] - mtrix[1][i];
            }
        }

        void display() {
            for(int i=0; i<=2;i++) {
                cout<< newMtr[i];
            }
            cout<< endl;
        }

};

int main() {

    MyMatrix m1;
    -m1;
    
    cout<< "Printing after subctraction of matrix"<<endl;
    m1.display();

    return 0;
}
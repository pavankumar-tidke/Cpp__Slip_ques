// b) Create a C++ class Weight with data members kilogram, gram. Write a C++ program using operator 
// overloading to perform following functions: 
// i. To accept weight. 
// ii. To display weight in kilogram and gram format. 
// iii. Overload += operator to add two weights. 
// iv. Overload == operator to check equality of two weights. 



#include <bits/stdc++.h>
using namespace std;

// class Weight {
//     int kg, g, k;

//     public:
//         Weight(int kilogram, int gram): kg(kilogram), g(gram){};

//         int operator +=(Weight &w2){
//             kg = kg += w2.kg;
//             g = g += w2.g;
//             return kg, g;
//         }

// };

// int main() {
//     int k1, k2, g1, g2, r;
//     cout<< "i. Enter weight kilogram and gram."<<endl; cout<< "Kilogram :- "; cin >>  k1; cout<< "gr :- "<< endl; cin >>  g1; 
//     Weight w1(k1, g1);
    
//     cout<< "ii. Enter weight kilogram and gram."<<endl; cout<< "Kilogram :- "; cin >>  k2; cout<< "gr :- "<< endl; cin >>  g2; 
//     Weight w2(k2, g2);
    
//     r = w1+=w2; cout<< r;

//     return 0;
// }






// ### USING == OPERATOR OVERLOAD #### // 

class Weight {
    int kg, g, k;

    public:
        Weight(int kilogram, int gram): kg(kilogram), g(gram){};

        void operator ==(Weight &w2){
            if(kg == w2.kg && g == w2.g){ 
                cout<< "The weights are equal";
            }
            else {
                cout<< "The weights are equal";
            }
        }

};

int main() {
    Weight w1(2, 6), w2(2, 5);
    
    w1==w2;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;


// class laptop {
//     public:
//         int ram;

//     public:
//         void r (int ram) {
//         cout << " The ram is :- " << ram << endl;
//     }
// };

// int main() {

//     laptop asus[5];

//     for (int i = 0; i < 5; i++)
//     {
//         cout << "This is object :- " << i+1;
//         asus->r(1024*i);
//     }

//     return 0;
// }































class books {
    public:
        string title;
        float price;

    public:
        void getdata();
        void putdata();
};

void books::getdata() {
    cout << "Title :- "; cin >> title;
    cout << "Price :- "; cin >> price;
}

void books::putdata() {
    cout << "Title :- " << title  << " && Price" << price << endl;
    const int size = 5;
}



int main() {

    books book[size];

    for(int i=0; i <book.size; i++) {
        cout << "Enter details of book " << (i+1) << endl;
        book[i].getdata();
    }

    for(int i=0; i<book.size; i++) {
        cout << "Book " << (i+1) << endl;
        book[i].putdata();
    }


    return 0;
}

#include <iostream>
#include <string>
using namespace std;


class test {
    int count=5;

    public:
        void operator +() {
            count = count - 5;
        }

        void display() {
            cout<< count;
        }
};

int main() {
    test t;
    +t;
    t.display();

    return 0;
}
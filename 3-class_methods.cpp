#include <iostream>
#include <string.h>
using namespace std;


            // METHODS INSIDE THE CLASS //

class Car {
    public:
        string name;
        string model;
        int price;  

    void carDetails(string name, string model, int price) {
        cout << "The name of car is: " << name << endl;
        cout << "The model of car is: " << model << endl;
        cout << "The price of price is: " << price << endl;
    }
};

int main() {
    Car Hyundai;

    Hyundai.carDetails("Kar98", "alpha", 150);

    system("pause");
    return 0;
}
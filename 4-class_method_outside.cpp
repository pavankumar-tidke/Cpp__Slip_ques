#include <iostream>
#include <string>
using namespace std;


            // METHODS OUTOUTSIDE THE CLASS //

class Car {
    public:
        string name;
        string model;
        int price;

    void carDetails(string name, string model, int price);
};

    // Methode outside from the class

void Car::carDetails(string name, string model, int price) {

    cout << "TThe name of car is: " << name << endl;
    cout << "The model of car is: " << model << endl;
    cout << "THe price of the car is: " << price << endl;
}

int main() {
    Car Hyundai;

    Hyundai.carDetails("kar98", "zeta", 200);

    system("pause");
    return 0;
}
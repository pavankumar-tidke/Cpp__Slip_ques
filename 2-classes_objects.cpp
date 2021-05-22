#include <iostream>
#include <string.h>
using namespace std;

// Classes simplt

class Car {                      // Class declare
    public:                      // Access modefire
        string name;             // Class attributes  (in c++ variables means attributes)
        string model;            // Class attributes  (in c++ variables means attributes)   
        int price;               // Class attributes  (in c++ variables means attributes)    
};



int main() {
    Car Hyundai;                 // new object declare

    Hyundai.name = "creta";      // Set attributes to the class attributes   
    Hyundai.model = "alpha";     // Set attributes to the class attributes   
    Hyundai.price = 150;         // Set attributes to the class attributes      


    // Printing the class attributes
    cout << "The name of car is: " << Hyundai.name << endl;
    cout << "The model ofc car is: " << Hyundai.model << endl;
    cout << "The price of car is: " << Hyundai.price << endl;
    

    system("pause");
    return 0;
}

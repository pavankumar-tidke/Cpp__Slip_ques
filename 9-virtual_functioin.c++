#include <iostream>
using namespace std;  


// class A {  
//     int x=5;  
    
//     public: 
//         virtual void display() {  
//             cout << "Value of x is : " << x<< endl;  
//         }  
// }; 

// class B: public A {  
//     int y = 10;  

//     public:  
//         void display() {  
//             cout << "Value of y is : " << y<< endl;  
//         }  
// };  
// int main() {  
//     A *a;  
//     B b;  
//     a = &b;  
//     a->display();
  
//     return 0;  
// }  


 
// class Base  
// {  
//     public:  
//     virtual void show() = 0;  
// }; 

// class Derived : public Base  
// {  
//     public:  
//     void show()  
//     {  
//         std::cout << "Derived class is derived from the base class." << std::endl;  
//     }  
// };  
// int main()  
// {  
//     Base *bptr;  
//     // Base b;  
//     Derived d;  
//     bptr = &d; 
//     bptr->show();  
//     return 0;  
// }   

    
class Animal {                                            //  base class declaration.  
    public:    
    string color = "Black";      
};     
class Dog: public Animal                       // inheriting Animal class.  
{      
 public:    
    string color = "Grey";      
};    
int main(void) {    
     Animal d;      
    cout<<d.color;     
}   
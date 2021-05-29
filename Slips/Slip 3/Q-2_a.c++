#include <bits/stdc++.h>
using namespace std;

class Shapes {

    public:
        virtual void area() = 0;
        virtual void volume() = 0;
};

class Rectangle : public Shapes {

    public:
        int le, br, hi;

    Rectangle(int l=0, int b=0, int h=0) {
        le = l;
        br = b;
        hi = h;
    }   

    void area() {
        cout<< "The area of rectangle :- "<< le*br<< endl;
    }

    void volume() {
        cout<< "The volume of rectangle :- "<< le*br*hi<< endl;
    }
};

class Circle : public Shapes {
    public:
        int rd;

    Circle(int r=0) {
        rd = r;
    }

    void area() {
        cout<< "The area of circle :- "<< 3.14*rd*rd<< endl;
    }
    void volume() {}
};

class Cylinder : public Shapes {
    public:
        int rd, hi;

    Cylinder(int r=0, int h=0) {
        rd = r;
        hi = h;
    }

    void area() {// 2πrh+2πr2
        cout<< "The area of cylinder :- "<< 2*3.14*rd*hi + 2*3.14*rd*rd << endl;
    }

    void volume() {
        cout<< "The area of cylinder :- "<< 3.14*rd*rd<< endl;
    }
};
    

int main() {

    Shapes *base;

    Rectangle rec(10, 5, 15);
    base = &rec;
    base->area();
    base->volume();

    Circle cir(3);
    base = &cir;
    base->area();

    Cylinder cyl(3, 5);
    base = &cyl;
    base->area();
    base->volume();


    return 0;
}

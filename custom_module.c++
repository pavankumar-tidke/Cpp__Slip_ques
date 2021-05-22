#include <iostream>
#include <string>

using namespace std;

class computer {
    public: 
        int ram;
        int hdd;
        int ssd;
    private:
        string name;
        

    public: 
        void compDetails(int ram, int hdd, int ssd, string name);
};

class company: public computer {

    public:
        void compDetails(int ram, int hdd, int ssd, string name) {            
            cout << "Your " << name << " Computer details are here :- " << endl;
            cout << "RAM :- " << ram << " GB" << endl;
            cout << "HDD :- " << hdd << " GB" << endl;
            cout << "SSD :- " << ssd << " GB" << endl;
        }
};



int main() {
    company myComp;

    myComp.compDetails(12, 500, 128, "ASUS");



    

    return 0;
}
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;


class Employee {
public:
    int Emp_id, salary;
    string name;
};

class Fulltime: public Employee {
    public :
        int counter=0, daily_wages, number_of_days;
    struct fullT {
        int empid;
        string ename;
        int nod;
        int sal;
    };
    struct fullT details[100];

    Fulltime(){};

    Fulltime(int empno, string ename, int nod, int d_w=100){
        Emp_id=empno;
        name=ename;
        daily_wages=d_w; 
        number_of_days=nod;
        salary=(daily_wages*number_of_days);

        fullT details[100] = {
            {Emp_id, name, daily_wages, salary}
        };
    }

    void display(){
        // cout<<"display";
        for(int i=0; i<1; i++) {
            cout << "Employee id :- "<< endl;
            // cout << "Employee Name :- "<< details[i].ename<<endl;
            // cout << "Employee salary :- "<< details[i].sal<<endl;
        }
    };
};

class Parttime: public Employee {
    public:
        int number_of_working_hours, hourly_wages;

    Parttime(int empno,string ename,int noh, int hw=50){
        Emp_id=empno;
        name=ename;
        number_of_working_hours=noh;
        hourly_wages=hw;
        salary=(number_of_working_hours*hourly_wages);
    }
};

int main() {
    int a, n, row, flag=0;
    cout<<"enter your choice"<<endl;
    cout<<"1.Accept the details of 'n' employees and calculate the salary"<<endl;
    cout<<"2. Display the details of ‘n’ employees"<<endl;
    cout<<"3. Display the details of employee having maximum salary for both types of employees."<<endl;
    cout<<"4.exit"<<endl;
    cin>>a;


    while(bool m=true) {
        switch(a) {
            case 1:
                cout<<"Enter the no. of employees"<<endl;
                cin>>n;
            
                for(int i=0; i<n; i++){
                    cout<<"enter the type of emp"<<endl;
                    cout<<"1.fulltime"<<endl;
                    cout<<"2.parttime"<<endl;
                    // flag++;
                    int type;
                    cin>>type;
                    if(type==1){
                        int empno,nod; string ename;
            
                        cout<<"enter fulltime emp number"<<endl;
                        cin>>empno;

                        cout<<"enter number of days"<<endl;
                        cin>>nod;

                        cout<<"enter the emp name"<<endl;
                        cin>>ename;

                        Fulltime emp(empno, ename, nod);
                            
                    }
                    else {
                        int empno,noh; string ename;
            
                        cout<<"enter parttime emp number"<<endl;
                        cin>>empno;

                        cout<<"enter number of hour"<<endl;
                        cin>>noh;

                        cout<<"enter the emp name"<<endl;
                        cin>>ename;

                        Parttime emp(empno, ename, noh);
                    }                
                }
                    
                do {
                    Fulltime disp;
                    disp.display();
                }
                while(false);
                
                break;

            case 4:
                exit(0);
                break;

        }

    }
    getch();
    return 0;
}
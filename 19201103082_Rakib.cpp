//r4kib.edu
//19201103082
#include<iostream>
using namespace std;

class Employees
{
public:
    int id;
    char name[30];
public:
    void get()
    {
        cout<<"\n Enter Employee ID.   :  ";
        cin>>id;
        cout<<"\n Enter Employee Name  :  ";
        cin>>name;
    }
};
class Manager:public Employees
{
public:
    int hr_rate= 5;
    int days;
    int salary;
public:
    void getdata()
    {

        cout<<"\n enter no of days    :  ";
        cin>>days;
    }
    void cal()
    {
        salary=hr_rate*days;
        cout<<"\n Hour Rate               : "<<hr_rate<<"$"<<endl;
    }
    void show()
    {
        void get();
        void getdata();
        void cal();
        cout<<"\n ----------------------------------\n";
        cout<<"\n Status             :  Manger";
        cout<<"\n Employee ID    :  "<<id;
        cout<<"\n Employee Name      :  "<<name;
        cout<<"\n Salary             :  "<<salary<<" $";

        cout<<"\n ----------------------------------\n";
    }
};
class Dayworker:public Employees
{
public:
    int hourly_rate=3;
    int working_hours;
    float salary1;
public:
    void get1()
    {
        cout<<"\n Enter Working Hours  :  ";
        cin>>working_hours;
    }
    void cal1()
    {
        salary1=hourly_rate*working_hours;
        cout<<"\n Hour Rate               : "<<hourly_rate<<"$"<<endl;
    }
    void show1()
    {
        void get();
        void get1();
        void cal1();
        cout<<"\n ----------------------------------\n";
        cout<<"\n Status          :  Dayworker";
        cout<<"\n Employee ID     :  "<<id;
        cout<<"\n Employee Name   :  "<<name;
        cout<<"\n Salary          :"<<salary1<<" $";

        cout<<"\n ----------------------------------\n";
    }
};
class Nightworker:public Employees
{
public:
    float hrrate=3.5;
    int working_hours;
    float salary2;
public:
    void get2()
    {

        cout<<"\n Enter Working Hours  :  ";
        cin>>working_hours;
    }
    void cal2()
    {
        salary2=hrrate*working_hours;
        cout<<"\n Hour Rate            :  "<<hrrate<<"$"<<endl;
    }
    void show2()
    {
        void get();
        void get2();
        void cal2();
        cout<<"\n ----------------------------------\n";
        cout<<"\n Status          :  NightWorker";
        cout<<"\n Employee Id     :  "<<id;
        cout<<"\n Employee Name   :  "<<name;
        cout<<"\n Salary          :   "<<salary2<<" $";

        cout<<"\n ----------------------------------\n";
    }
};
int main()
{
    //manager
    Manager m1;
    m1.get();
    m1.getdata();
    m1.cal();
    m1.show();
    //dayworker
    Dayworker d1;
    d1.get();
    d1.get1();
    d1.cal1();
    d1.show1();
    //Nightworker
    Nightworker n1;
    n1.get();
    n1.get2();
    n1.cal2();
    n1.show2();
    //exit




    return 0;
}

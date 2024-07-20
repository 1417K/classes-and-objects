/* Write a c++ program to create a class employee to having data members id,name,salary for 1 object*/

#include<iostream>
using namespace std;
class employee
{
    private:
     int id;
     char name[10];
     float salary;
    public:
        void getdata()
      {
        cout<<"\nEnter employee id:"<<endl;
        cin>>id;
        cout<<"\nEnter employee name:"<<endl;
        cin>>name;
        cout<<"\nEnter employee salary:"<<endl;
        cin>>salary;
      }
      void putdata()
      {
        cout<<"\n*****************EMPLOYEE INFORMATION*****************************"<<endl;
        cout<<"\nEmployee id:"<<id<<endl;
        cout<<"\nEmployee Name:"<<name<<endl;
        cout<<"\nEmployee Salary:"<<salary<<endl;
      }
};
int main()
{
    employee e1;
     e1.getdata();
    e1.putdata();
     return 0;
}
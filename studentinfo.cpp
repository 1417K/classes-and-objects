/*Write a cpp program having class student containing data members roll number name and marks.accept and display data for single student*/
#include<iostream>
using namespace std;
class student
{
    private:
        char name[20];
        int roll_no;
        float marks;
    public:
         void getdata()
       {
         cout<<"Enter your name:"<<endl;
         cin>>name;
         cout<<"Enter your Roll Number:"<<endl;;
         cin>>roll_no;
         cout<<"Enter your Marks:"<<endl;
         cin>>marks;
       }
      void putdata()
      {
         cout<<"***********Student Information***************"<<endl;
         cout<<"Name of the student:"<<name<<endl;
         cout<<"Roll Number of the Student:"<<roll_no<<endl;
         cout<<"Marks of the student:"<<marks<<endl;
       }
};       
int main()
  {
     student s1;
     s1.getdata();
     s1.putdata();
     return 1;
   }

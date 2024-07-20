#include<iostream>
using namespace std;
class Addition
{
    private:
     int a,b;
    public:
     void disp_info()
     {  
        int no,num;
        cout<<"\nEnter first number:"<<endl;
        cin>>no;
        cout<<"\nEnter second number:"<<endl;
        cin>>num;
        a=no;
        b=num;
     } 
     void put_info()
     {
        int c;
        c=a+b;
        cout<<"\nAddition="<<c<<endl;
     }
};
 int main()
{
 Addition a1;
 a1.disp_info();
 a1.put_info();
 return 0;
}
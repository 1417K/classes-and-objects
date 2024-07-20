/*How to acess private member functions of the class*/

#include<iostream>
using namespace std;
class Addition
{
    private:
        int a,b;    
      void get_add_info()
      {
        a=500;
        b=800;
      }
      public:
      void put_add_info()
      {
        get_add_info();
       int c;
       c=a+b;
        cout<<"\nAddition="<<c<<endl;
      }
};
int main()
{
    Addition a1;
    a1.put_add_info();
    return 0;
}
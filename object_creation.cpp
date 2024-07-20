#include<iostream>
using namespace std;
class Object
{
   private:
   static int count;
   public:
   Object()
   {
    count++;
    cout<<"Object Created Successfully"<<endl;
   }
   static void display()
   {
    cout<<"Number of Objects Created:"<<count;
   }
};
 int Object::count;
 int main()
 {
    Object b1,b2,b3;
    Object::display();
   return 0;
 }
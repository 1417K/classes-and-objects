/* Write a c++ program to create a class book having data members id, name, author and price .
Accept and display data for one object*/

#include<iostream>
using namespace std;
class book
{
  private:
     int book_id;
     char name[10];
     char auth_name[10];
      float book_price;
  public:
   void get_bookdata()
   {
     cout<<"Enter ID if the book:"<<endl;
     cin>>book_id;
     cout<<"\nEnter Name of the book:"<<endl;
     cin>>name;
     cout<<"\nEnter Author name of the book:"<<endl;
     cin>>auth_name;
     cout<<"\nEnter price of the book :"<<endl;
     cin>>book_price;
    }   
   void put_bookdata()
   {
    cout<<"***********BOOK INFORMATION*************"<<endl;
    cout<<"BOOK ID :"<<book_id<<endl;
    cout<<"BOOK NAME :"<<name<<endl;
    cout<<"BOOK AUTHOR NAME :"<<auth_name<<endl;
    cout<<"BOOK RPICE :"<<book_price<<endl;
    
   }  
};
int main()
{
  book b1;
  b1.get_bookdata();
  b1.put_bookdata();
  return 0;
}
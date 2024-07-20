//write a program having data members fruit name,type and price .Accept and display data members outside the class.
#include<iostream>
using namespace std;
class Fruit
{
  private: 
    char name[10];
    char type[10];
    float price;
    public:
     void get_fruit();
     void put_fruit();
};
void Fruit:: get_fruit()
{
    cout<<"\nEnter fruit name:"<<endl;
    cin>>name;
    cout<<"\nEnter fruit type:"<<endl;
    cin>>type;
    cout<<"\nEnetr fruit price:"<<endl;
    cin>>price;
}
void Fruit::put_fruit()
{
  cout<<"\n****************************************"<<endl;
  cout<<"\nFruit Name:"<<name<<endl;
  cout<<"\nFruit Type:"<<type<<endl;
  cout<<"\nEnter Price:"<<price<<endl;
}
int main()
{
    Fruit f1;
    f1.get_fruit();
    f1.put_fruit();
    return 0;
}
//Write a program contains class country having data members city name and city code .Accept and display data for 1 objects.
#include<iostream>
using namespace std;
class country
{
 private:
   int country_code;
   char country_name[20];
 public:
   void get_count_details()
   {
    cout<<"\nEnter country code:"<<endl;
    cin>>country_code;
    cout<<"\nEnter Country Name:"<<endl;
    cin>>country_name;
   }
   void disp_count_details()
   {
    cout<<"\n"<<country_code<<"\t"<<country_name<<endl;
   }
};
int main()
{
  country c1;
    c1.get_count_details();
    c1.disp_count_details();
 return 0;
}
// ***Define a class named "Train" representing following members:
//-Train Number
//- Train Name
//- Source
//- Destination
//- Journey Date
//- Capacity
//***Member Function
//- Input Train Data
//- Display Data

#include<iostream>
#include<string.h>
using namespace std;
class Train
{
  private:
     int train_no;
     char train_name[20];
     char source[20];
     char destination[20];
     char journey_date[10];
     int capacity;
    public:
      void get_train_info()
      {
        cout<<"Enter Train Name:"<<endl;
        cin>>train_name;
        cout<<"Enter Train Number:"<<endl;
        cin>>train_no;
        cout<<"Enter Source:"<<endl;
        cin>>source;
        cout<<"Enter Destination:"<<endl;
        cin>>destination;
        cout<<"Enter Journey Date:"<<endl;
        cin>>journey_date;
        cout<<"Enter Capacity of Seats:"<<endl;
        cin>>capacity;
      }
      void disp_train_info()
      {
        cout<<"********TRAIN INFORMATION************"<<endl;
        cout<<"Train Name:"<<train_name<<endl;
        cout<<"Train Number:"<<train_no<<endl;
        cout<<"Source:"<<source<<endl;
        cout<<"Destination:"<<destination<<endl;
        cout<<"Journey Date:"<<journey_date<<endl;
        cout<<"Seat Capacity:"<<capacity<<endl;
      }
};
int main()
{
    Train t1;
    t1.get_train_info();
    t1.disp_train_info();
    return 0;
}
#include<iostream>
#include<stdio.h>
using namespace std;
class basic_info{
                 protected:
                 char name[20];
                 int roll_no;
                 char sex[10];
                 public:
                    void getdata();
                    void display();
                };

void basic_info::getdata()
{   cout<<"\nEnter name :"; cin>>name;
    cout<<"Enter roll no. :"; cin>>roll_no;
    cout<<"Enter sex :";  cin>>sex;
}

void basic_info::display()
{   cout<<"\n\nName : "<<name;
    cout<<"\nRoll no. : "<<roll_no;
    cout<<"\nSex : "<<sex;
}

class physical_fit:public basic_info{
                                     float ht;
                                     float wt;
                                     public:
                                        void getdata();
                                        void display();
                                    };

void physical_fit::getdata()
{   cout<<"Enter height :"; cin>>ht;
    cout<<"Enter weight :"; cin>>wt;
}

void physical_fit::display()
{   cout<<"\nHeight : "<<ht;
    cout<<"\nWeight : "<<wt;
}

int main(){
    physical_fit p1;
    p1.basic_info::getdata();
    p1.getdata();
    p1.basic_info::display();
    p1.display();
    return 0;
}

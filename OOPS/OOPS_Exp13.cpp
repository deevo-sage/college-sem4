#include <iostream>
using namespace std;
class A
{
public:
    char name[20];
    char sex[10];
    int rollno;
    void get()
    {
        cout << "\n Enter the name: ";
        gets(name);
        cout << "\n Enter the sex: ";
        gets(sex);
        cout << "\n Enter the value of rollno: ";
        cin >> rollno;
    }
};

class B : public A
{
public:
    float height, weight;
    void readdata()
    {
        cout << "\n Enter the height: ";
        cin >> height;
        cout << "\n Enter the weight: ";
        cin >> weight;
    }
};

class C : public B
{
public:
    void display()
    {
        cout << "\n";
        cout << "Name: " << name << endl;
        cout << "Sex: " << sex << endl;
        cout << "Rollno: " << rollno << endl;
        cout << "Height: " << height << endl;
        cout << "Weight: " << weight << endl;
    }
};

int main()
{
    cout << "Program 13\nSidharth Sahni \n30-IT-19\n";
    C a;
    a.get();
    a.readdata();
    a.display();
    return 0;
}

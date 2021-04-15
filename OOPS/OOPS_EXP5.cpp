#include <iostream>

using namespace std;

class employee
{
private:
    char name[20];
    int age;
    int salary;
    string address;

public:
    void getdata();
    void displaydata();
} emp1;
inline void employee::getdata()
{
    cout << "\tEnter the name: ";
    cin >> name;
    cout << "\tEnter age: ";
    cin >> age;
    cout << "\tEnter address: ";
    cin >> address;
    cout << "\tEnter the salary: ";
    cin >> salary;
}
inline void employee::displaydata()
{
    cout << "\tName: " << name << endl;
    cout << "\tAge: " << age << endl;
    cout << "\tAddress: " << address << endl;
    cout << "\tSalary: " << salary << endl;
}
int main()
{
    cout << "OOPS program-5\nSidharth Sahni\n30-IT-19\n";
    employee emp1[20];
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter details of employee " << i << ":\n";
        emp1[i].getdata();
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "\nEMPLOYEE " << i << ":\n";
        emp1[i].displaydata();
    }

    return 0;
}

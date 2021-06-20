//Single Inheritance
#include<iostream>
using namespace std;
class basic_info
{
      char name[25];
      int rno;
      char sex;
public:
      void getdata();
      void putdata();
};
void basic_info::getdata()
{
      cout << "Enter name: ";
      gets(name);
      cout << "\nEnter rollno: ";
      cin >> rno;
      cout << "\nEnter sex: ";
      cin >> sex;
}
void basic_info::putdata()           // member function definition
{
      cout << "\n\nName     : " << name;
      cout << "\nRoll No. : " << rno;
      cout << "\nSex      : " << sex;
}
class phy_fit: public basic_info    //single inheritance
{
      float ht;
      float wt;
public:
      void input()
      {
            getdata();
            cout << "\nEnter height(in cms): ";
            cin >> ht;
            cout << "\nEnter weight(in kg): ";
            cin >> wt;
      }
      void display()
      {
            putdata();
            cout << "\nHeight   : " << ht;
            cout << "\nWeight   : " << wt;
      }

};
int main()
{
#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
#endif
      phy_fit obj;
      obj.input();
      obj.display();
      return 0;
}
/*INPUT
Jai Gaur
5
M
180.5
70.5
*/


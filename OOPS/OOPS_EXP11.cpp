#include <iostream>
#include <conio.h>
using namespace std;
class maxx
{
  int x;
  int y;
  int z;

public:
  void getdata()
  {
    cout << endl
         << "Enter the value of x:";
    cin >> x;
    cout << endl
         << "Enter the the value of y:";
    cin >> y;
    cout << endl
         << "Enter the value of z:";
    cin >> z;
  }
  friend float greatest(maxx m)
  {
    if (m.x > m.y && m.y > m.z)
      return m.x;
    else if (m.y > m.x && m.y > m.z)
      return m.y;
    else
      return m.z;
  }
};
int main()
{
  int result;
  maxx m;
  m.getdata();
  result = greatest(m);
  cout << endl
       << "Sidharth Sahni 30-IT-19\n Greatest of three numbers x,y and z is:" << result;
  return 0;
}

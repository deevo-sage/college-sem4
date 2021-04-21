#include <iostream>
using namespace std;
class maxx
{
  int x, y, z;

public:
  void
  getdata()
  {
    cout << "Enter the 3 numbers :";
    cin >> x >> y >> z;
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
  cout << "Program 11\nSidharth Sahni \n30-IT-19\n";
  cout << "Greatest of the three numbers  is " << greatest(m) << endl;
  return 0;
}

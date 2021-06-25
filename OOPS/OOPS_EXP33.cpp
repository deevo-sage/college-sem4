#include <bits/stdc++.h>
using namespace std;
int main()
{
     cout << "Program 33\nSidharth Sahni \n30-IT-19\n";
     string str;
     getline(cin, str);
     cout << "The initial string is : ";
     cout << str << endl;
     str.push_back('!');
     cout << "The string after push_back operation is : ";
     cout << str << endl;
     str.pop_back();
     cout << "The string after pop_back operation is : ";
     cout << str << endl;
     cout << "The length of the string is :" << str.length()
          << endl;
     string s1 = "this is string 1";
     string s2 = "this is string 2";
     char ch[80];
     s1.copy(ch, 10, 0);
     cout << "The new copied character array is : ";
     cout << ch << endl
          << endl;
     cout << "The 1st string before swapping is : ";
     cout << s1 << endl;
     cout << "The 2nd string before swapping is : ";
     cout << s2 << endl;
     s1.swap(s2);
     cout << "The 1st string after swapping is : ";
     cout << s1 << endl;
     cout << "The 2nd string after swapping is : ";
     cout << s2 << endl;
     char init[] = "to be concatenated";
     char add[] = " will be added to the end";
     strcat(init, add);
     cout << "\nThe string after concatenation is: " << init
          << endl;
     return 0;
}
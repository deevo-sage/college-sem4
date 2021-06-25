#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Program 32\nSidharth Sahni \n30-IT-19\n";

    vector<int> v{5, 2, 7, 91, 15, 1, 67};
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ", ";
    }
    cout << "\nInsert a value to append to the end of thevector : ";
    int val;
    cin >> val;
    v.push_back(val);
    cout << "\nAfter appending a value, the vector is: ";
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ", ";
    }
    v.pop_back();
    cout << "\nAfter removing the last value, the vector is:";
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ", ";
    }
    cout << "\nFirst elemet of the vector is: " << *v.begin();
    cout << "\nLast elemet of the vector is: " << v.back();
    sort(v.begin(), v.end());
    cout << "\nAfter sorting, the vector is: ";
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ", ";
    }

    cout
        << "\nSize of vector is: " << v.size();
    cout << "\nAllocated space to the vector is: " << v.capacity();
    v.insert(v.begin() + 3, 5);
    cout << "\nAfter inserting 5, the vector is: ";
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ", ";
    }
    return 0;
}
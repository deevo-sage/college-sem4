#include<bits/stdc++.h>
using namespace std;

class first {
protected:
    int book_no;
    string book_name;
public:
    void getdata()
    {
        cout << "\n\nEnter Book No:";
        cin >> book_no;
        cout << "\nEnter Book Name:";
        cin >> book_name;
    }
    void putdata()
    {
        cout << "\nBook No:" << book_no;
        cout << "\nBook Name:" << book_name;
    }
};
class second {
protected:
    string author_name;
    string publisher;
public:
    void getdata()
    {
        cout << "\nEnter Author Name:";
        cin >> author_name;
        cout << "\nEnter Publisher:";
        cin >> publisher;
    }
    void showdata()
    {
        cout << "\nAuthor Name:" << author_name;
        cout << "\nPublisher:" << publisher;
    }
};
class third: public first, public second {
protected:
    int no_of_pages;
    int year_of_publication;
public:
    void getinfo()
    {
        cout << "\nEnter no of Pages:";
        cin >> no_of_pages;
        cout << "\nEnter Year of Publication:";
        cin >> year_of_publication;
    }
    void display() {
        putdata();
        showdata();
        cout << "\nNo of Pages:" << no_of_pages;
        cout << "\nYear of Publication:" << year_of_publication;
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int i;
    third obj[3];
    for (i = 0; i < 3; i++)
    {
        obj[i].first::getdata();
        obj[i].second::getdata();
        obj[i].getinfo();
    }

    cout << endl << "INFORMATION:" << endl;
    for (i = 0; i < 3; i++)
    {
        cout << endl << "\nBOOK-" << i + 1 << "\n";
        obj[i].display();
    }
    return 0;
}
/*INPUT
78
DBMS
EBalagurusamy
McGrowHills
300
2001
79
OOPS
DeepakGupta
BETpublications
450
2002
80
COA
HenryKorth
McGrowHills
350
2003
*/

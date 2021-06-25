#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream fs, ft;
    string str;
    cout << "Program 28\nSidharth Sahni \n30-IT-19\n";
    fs.open("file1.txt", ios::out);
    if (!fs)
    {
        cout << "\nError in Opening Source File...!!!";
        exit(0);
    }
    cout << "\nEnter data in file 1: ";
    getline(cin, str);
    fs << str;
    fs.close();
    ft.open("file2.txt", ios::out);
    if (!ft)
    {
        cout << "Error in Opening Destination File...!!!";
        exit(0);
    }
    fs.open("file1.txt", ios::in);
    if (fs && ft)
    {
        while (getline(fs, str))
        {
            ft << str << "\n";
        }
        cout << "\nCopied File 1 to a New File.\n";
    }
    else
    {
        cout << "File Cannot Open...!!!";
        exit(0);
    }
    fs.close();
    ft.close();
    cout << "\nFile 2 : ";
    ft.open("file2.txt", ios::in);
    while (getline(ft, str))
    {
        cout << str << "\n";
    }
    ft.close();

    return 0;
}

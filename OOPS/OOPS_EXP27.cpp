#include <iostream>
#include <fstream>
#include<stdio.h>

using namespace std;

int main(){
    fstream file;
    string myText;
    cout << "Program 27\nSidharth Sahni \n30-IT-19\n";
    file.open("text1.txt", ios::out);
    if(!file){
        cout<<"Error in creating file!!!"<<endl;
        exit(0);
    }
    cout<<"\nFile created successfully."<<endl;
    cout<<"\nEnter a string: ";
    getline(cin,myText);
    file<<myText;
    file.close();
    file.open("text1.txt",ios::in);
    if(!file){
        cout<<"Error in opening file!!!"<<endl;
        return 0;
    }
    cout<<"\nFile content  : ";
    while (getline (file, myText)){
        cout<<myText<<endl;
    }
    file.close();
  
    return 0;
}

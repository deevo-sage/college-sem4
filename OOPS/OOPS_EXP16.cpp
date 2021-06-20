/*Multilevel Inheritance*/
#include<bits/stdc++.h>
using namespace std;

class STUDENT {
protected:
	int roll_no;
	string name;
public:
	void getdata() {
		cout << "\nEnter Roll No.: ";
		cin >> roll_no;
		cout << "\nEnter Name: ";
		cin >> name;
	}
	void putdata() {
		cout << "\nRoll No.: " << roll_no;
		cout << "\nName: " << name;
	}
};

class EXAM: public STUDENT {
protected:
	int marks[6];
public:
	void getinfo() {
		cout << "\nEnter marks in six subjects: ";
		cout << "\nOOP: ";
		cin >> marks[0];
		cout << "\nDBMS: ";
		cin >> marks[1];
		cout << "\nCOA: ";
		cin >> marks[2];
		cout << "\nMATHS: ";
		cin >> marks[3];
		cout << "\nTOC: ";
		cin >> marks[4];
		cout << "\nCS: ";
		cin >> marks[5];
	}
	void showdata() {
		cout << "\nMarks in six subjects are: ";
		cout << "\nOOP: " << marks[0];
		cout << "\nDBMS: " << marks[1];
		cout << "\nCOA: " << marks[2];
		cout << "\nMATHS: " << marks[3];
		cout << "\nTOC: " << marks[4];
		cout << "\nCS: " << marks[5];
	}
};

class RESULT: public EXAM {
protected:
	int total_marks;
public:
	void display() {
		total_marks = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4] + marks[5]);
		putdata();
		showdata();
		cout << "\nTotal Marks: " << total_marks;
	}
};

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	RESULT obj;
	obj.getdata();
	obj.getinfo();
	obj.display();

	return 0;
}
/*INPUT
05
Jai
100
90
80
70
60
50
*/
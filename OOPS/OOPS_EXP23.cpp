#include <iostream>
using namespace std;

template <typename T>
int Search(T arr[], int n, T key)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == key)
			return i;
	}
	return n; 
}
int main()
{
	cout << "Program 23\nSidharth Sahni \n30-IT-19\n";

	int a[] = {1, 2, 3, 4, 10, 15};
	int n = sizeof(a) / sizeof(int); 
	int key = 10;
	cout << Search(a, n, key) << endl;

	float b[] = {1.1, 1.2, 1.3, 1.4};
	float key1 = 1.2;
	cout << Search(b, 3, key1) << endl;

	char c[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	char key2 = 'f';
	cout << Search(c, 6, key2) << endl;

	return 0;
}
#include <iostream>
#include <stdexcept>
using namespace std;

float IndexOutOfBounds(int index,int size){
	if(index >= size){
		throw runtime_error("Array IndexOutOfBounds Error!\n");
	}
	else{
		return index;
	}
}

int main(){
	int arr[100],i,res,size;
	cout<<"Enter the size of the array: ";
	cin>>size;
	cout<<"Enter The Array : ";
	for(int i=0;i<size; i++){
		cin>>arr[i];
	}
	try{
		cout<<"Enter Index To Be Accessed : ";
		cin>>i;
		res = IndexOutOfBounds(i,size);
		cout<<arr[i]<<" ";
	}
	catch (runtime_error& e){
		cout<<"\nException occurred!"<<endl;
		cout<<e.what();
	}
	return 0;
}

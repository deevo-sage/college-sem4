#include <iostream>
#include <stdexcept>

using namespace std;

float Division(float num, float den){
	if (den == 0){
		throw runtime_error("Math error: Attempted to divide by Zero\n");
	}
	return (num / den);
}

int main(){
	float numerator, denominator, result;
	cout << "Program 26\nSidharth Sahni \n30-IT-19\n";
	cout << "Enter Numerator : ";
	cin>>numerator;
	cout<<"Enter Denominator : ";
	cin>>denominator;
	try{
		result = Division(numerator, denominator);
		cout<<"\nThe quotient is "<<result<<endl;
	}
	catch (runtime_error& e){
		cout<<"\nException occurred!"<<endl;
		cout<<e.what();
	}
	return 0;
}

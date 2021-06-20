
#include<iostream>
using namespace std;
template <class T>
void Swap(T &x, T &y)
{
    T t=x;
    x=y;
    y=t;
    
}
int main()
{
	cout<<"\t\t\tVISHAL DANGAICH \n\t\t\t02-IT-19"<<endl;
	cout<<"\t\t\tSWAPPING USING FUNCTION TEMPLATE "<<endl;
	
    int m,n;
    float a ,b;
    char c ,d;
    
    cout<<"Enter any two integers"<<endl;
    cin>>m>>n;
    
    cout<<"Enter any two floating point numbers"<<endl;
    cin>>a>>b;
    
    cout<<"Enter any two characters"<<endl;
    cin>>c>>d;
    
    cout<<"BEFORE SWAPPING DATAS ARE: "<<endl;
    cout<<"m ="<<m<<"\tn = "<<n<<endl;
    cout<<"a ="<<a<<"\tb = "<<b<<endl;
    cout<<"c ="<<c<<"\td = "<<d<<endl;
    
    Swap(m, n);
    Swap(a, b);
    Swap(c, d);
    
    cout<<"AFTER SWAPPING DATAS ARE: "<<endl;
    cout<<"m ="<<m<<"\tn = "<<n<<endl;
    cout<<"a ="<<a<<"\tb = "<<b<<endl;
    cout<<"c ="<<c<<"\td = "<<d<<endl;
    
    return 0;
}

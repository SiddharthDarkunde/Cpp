#include<iostream>
using namespace std;

class A{
	public:
	 int a,c;
	 void get(){
	 cout<<"Enter 1 values : ";
	 cin>>a;
	 }
	 
	 void sqr()
	 {
	 	c=a*a;
	 	cout<<"sum:"<<c;
	 }
};

int main()
{
	A obj;
	obj.get();
	obj.sqr();
	return(0);
}

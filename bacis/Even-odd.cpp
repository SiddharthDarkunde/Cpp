#include<iostream>
using namespace std;

class A{
	public: 
	 int a;
	 void Even_od()
	 {
	 	cout<<"Enter a value";
	 	cin>>a;
	 	
	 	if(a%2==0)
	 	{
	 		cout<<a<<" is Even";
		}
		
	    else
		{
			cout<<a<<" is odd";
	    }
	 
	 }
	
	
};

int main()
{
	A obj;
	obj.Even_od();
	return(0);
}

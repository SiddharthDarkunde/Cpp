#include<iostream>
using namespace std;

class A{
	public: 
	 int a,b,c;
	 void gretest()
	 {
	 	cout<<"Enter 3 value : ";
	 	cin>>a>>b>>c;
	 	
	 	if(a==0||a<0)
	 	{
	 		cout<<" value should not be zero";
		}
		
	    else if(a>b&&a>c)
		{
			cout<<a<<" is greater ";
	    }
	    
	    else if(b>a&&b>c)
		{
			cout<<b<<" is greater";
			
			 }	 
		else
		{
			cout<<c<<" is greater";
		}
	 }
	
	
};

int main()
{
	A obj;
	obj.gretest();
	return(0);
}

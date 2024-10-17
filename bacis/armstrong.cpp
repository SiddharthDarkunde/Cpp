#include<iostream>
using namespace std;

class A{
	public: 
	 int n , rev=0,temp ,rem;
	 void palindrom()
	 {
	 	cout<<"Enter a value :";
	 	cin>>n;
	 	 temp=n;
	 	
		  while(n>0)
	 	 {
	 	 	rev=n%10;
	 	 	rem +=rev*rev*rev;
	 	 	n=n/10;
		}
	 
	 if(temp==rem)
	 {
	 		 	cout<<temp<<" is armstrong number ";

	 }
	 
	 else
	 {
	 		 	cout<<temp<<" is not armstrong number";

	 }
}
	
	
};

int main()
{
	A obj;
	obj.palindrom();
	return(0);
}

#include<iostream>
using namespace std;

class A{
	public: 
	 int n , rev=0,temp ;
	 void palindrom()
	 {
	 	cout<<"Enter a value :";
	 	cin>>n;
	 	 temp=n;
	 	
		  while(n>0)
	 	 {
	 	 	rev=(rev*10)+n%10;
	 	 	n=n/10;
		}
	 
	 if(temp==rev)
	 {
	 		 	cout<<temp<<" is palindrom";

	 }
	 
	 else
	 {
	 		 	cout<<temp<<" is not palindrom";

	 }
}
	
	
};

int main()
{
	A obj;
	obj.palindrom();
	return(0);
}

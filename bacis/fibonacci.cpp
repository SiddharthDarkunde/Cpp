#include<iostream>
using namespace std;

class A{
	public: 
	 int num ,a=0 ,b=1, next;
	 void Even_od()
	 {
	      cout<<"You need series upto :";
	      cin>>num;
	      
	      cout<<a<<","<<b<<",";
	      
	      for(int i=0; i<num ; i++)
	      {
	      	next=a+b;
	      	a=b;
	      	b=next;
	      	 cout<<","<<next;
	      	
		  }
	 
	 }
	
	
};

int main()
{
	A obj;
	obj.Even_od();
	return(0);
}

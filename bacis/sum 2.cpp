#include<iostream>
using namespace std;

class A{
	public:
	 int a,b,c,ch;
	 void get(){
	 cout<<"Enter 2 values : ";
	 cin>>a>>b;
	 
	 do{
	 	cout<<"1.sum \n 2.sub \n 3.div \n 4.mult \n 5.Exit \n enter your choice :";
	 	cin>>ch;
	 	
	 } while(0);
	 
	 switch(ch){
	
	    case  1: sum();
	         break;
	     case  2: sub();
	         break;     
	      case  3: div();
	         break;     
	       case  4: mult();
	         break;
	          case  5: exit(0);
	         break;
	          }
	 }
	 
	 void sum()
	 {
	 	c=a+b;
	 	cout<<"sum:"<<c;
	 }
	 
	  void sub()
	 {
	 	c=a-b;
	 	cout<<"sub:"<<c;
	 }
	 
	  void div()
	 {
	 	c=a/b;
	 	cout<<"div:"<<c;
	 }
	 
	  void mult()
	 {
	 	c=a*b;
	 	cout<<"mult:"<<c;
	 }
};

int main()
{
	A obj;
	obj.get();

	return(0);
}

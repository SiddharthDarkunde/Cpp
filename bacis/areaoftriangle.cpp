#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

float findArea(float a, float b, float c)  
{  
    
    if (a < 0 || b < 0 || c < 0 ||  
       (a + b <= c) || a + c <= b ||  
                       b + c <= a)  
    {  
        cout << "Not a valid triangle";  
        exit(0);  
    }  
    float s = (a + b + c) / 2;  
    return sqrt(s * (s - a) *  (s - b) * (s - c));  
}  
  

int main()  
{  
    float a ,b , c;
        
    cout<<"Enter side A : ";
	cin>>a;
	cout<<"Enter side B : ";
	cin>>b;
	cout<<"Enter side C : ";
	cin>>c;
    cout << "Area is " << findArea(a, b, c);  
    return 0;  
}  

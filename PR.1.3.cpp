include<iostream> 
using namespace std; 
class time
{ 
	public: 
	int sec; 
}; 
int main() 
{ 
int h1,h2,m1,m2;
time t1; 

 cout<<"enter second  time: ";
 cin>>t1.sec; h1=t1.sec/3600; 
 
 h2=t1.sec%3600; 
 m1=h2/60; 
 m2=h2%60;
 cout<<"Time is : "<<h1<<":"<<m1<<":"<<m2;
 
 return 0; 
 }

#include<iostream>
using namespace std;



//call by value
//call by address
//call ny reference


void value(int a , int b){
	int t = a;
	a=b;
	b=t;
}

void reference(int &a , int &b){
	int t = a;
	a=b;
	b=t;
}

void address(int *a , int *b){
	int t = *a;
	*a=*b;
	*b=t;
}








struct rec{
int l;
double b;};



int main(){
struct rec r={20,30};
struct rec *p = &r;
cout<<sizeof(rec)<<endl;
cout<<(*p).l<<"\t"<<(*p).b<<"\n";

int a = 10 ;
int b = 20;

cout<<"Actual Value Of a= "<<a<<endl;
cout<<"Actual Value Of b= "<<b<<endl;



value(a,b);
cout<<"Call By Value a= " <<a<<" b= "<<b<<"\n";
reference(a,b);
cout<<"Call By Reference a= " <<a<<" b= "<<b<<"\n";
address(&a,&b);
cout<<"Call By Address a= " <<a<<" b= "<<b<<"\n";

return 0;}


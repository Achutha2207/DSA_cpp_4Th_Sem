#include<iostream>
#include<stdlib.h>
using namespace std;




int * poi(int n){
    int *p ;
    p=(int *)malloc(n*sizeof(int));
    return p;
}


void swap(int *a , int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

void reference(int &a , int &b){
    int temp = a;
    a=b;
    b=temp;
}


void print(int *a , int n){
   
    for(int i = 0; i < n ; i++){
        cout<<a[i]<<"\t";}cout<<endl;
    }



int main(){
    int a , b;
    int array[]={1,2,3,4,5};
    int n=5;
    cin>>a>>b;
    cout<<"Value Of (a,b) before sawp ("<<a<<","<<b<<")"<<endl;
    swap(&a,&b);
    cout<<"Value Of (a,b) after sawp ("<<a<<","<<b<<")"<<endl;
    reference(a,b);
    cout<<"Value Of (a,b) after sawp by call by reference ("<<a<<","<<b<<")"<<endl;
    print(array,n);
    cout<<array<<endl;
    int *x;
    cout<<x<<endl;
    x=poi(10);
    cout<<x<<endl;
    cout<<sizeof(x)<<endl;
    return 0;
}
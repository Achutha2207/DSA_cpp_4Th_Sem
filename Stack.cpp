#include<iostream>
#include<string.h>

using namespace std;


class stack{
	
	private:
		int top;
		int arr[5];


	public:
		stack(){
		top=-1;
		for(int i = 0 ; i <5 ; i++){
		arr[i]=0;}


		bool isempty(){
		
		if(top==-1){
		return true;}

		else{return false;}}


		bool isfull(){

		if(top==4){
		return true;}
		
		else{return false;}}



		void push(int val){

		if(isfull()){
			cout<<"Stack Overflow"<<endl}
		
		else{top++; //Top == 0
			arr[top]=val;}}

		int pop(){
			if(isempty()){
				cout<<"Stack Underflow"<<endl;
				return 0;}

			else{
				return stack[top--];
				stack[top]=0;
			}}

		int count(){
			return(top+1);}

		int peek(int pos){
		
			if(isempty()){
			





};


int main(){
	return 0;}


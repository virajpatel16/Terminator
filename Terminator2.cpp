/*a person cannot be able to vote if his/her age is less than 18*/

#include<iostream>
using namespace std;

main(){
	
	int age=18;
	int b=5;
	
	try{
		if(b<age){
			throw age;
		}
		else{
			cout<<"a person can be able to vote if his/her age is greater than 18";
		}
	}
	catch(int d){
		cout<<"a person cannot be able to vote if his/her age is less than 18";
	}
}

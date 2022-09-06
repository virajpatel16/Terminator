/*1. WAP to implement exception handling mechanism for different types of scenarios:
  - a number cannot be divide by zero
  - a person cannot be able to vote if his/her age is less than 18
  - a password cannot be validate if it doesn’t contains an uppercase letter
*/

#include<iostream>
using namespace std;

main(){
	int a=0;
	int b=33;
	int c;
	
	try{
		if(a==0){
			throw a;
		}
		else{
		
		c=a/b;
		cout<<c;
}
	}
	catch(int s){
	
	cout<<"a number cannot be divide by zero";
}
}


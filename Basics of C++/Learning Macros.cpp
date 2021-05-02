/*

Macro is one of the most important part of CPP preprocessors. 
It allows us to define variables and functions and it basically works by substituting the 
value or function during the preprocessing stage of code conversion(High level to Low level).
So, let's dive into preprocessors!

You are given two inputs: a(integer),and b(integer). You need to print a * b .

*/

#include <iostream>
#define MULTI(a,b) (a*b)

using namespace std;

void macros (int a, int b);

void macros (int a, int b){
	
	cout << MULTI(a,b);
	cout << endl;
}

int main(){
	
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	
	while (t--){
		
		int a,b;
		cin >> a >> b;
		macros(a,b);
		
	}
	
	return 0;
}
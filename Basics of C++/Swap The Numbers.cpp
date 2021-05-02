/*

Given two numbers a and b, you need to swap their values so a holds the value of b and b holds the value of a.

*/

#include <iostream>

using namespace std;

int main(){
	
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	
	while (t--){
		
		int a, b;
		
		cin >> a >> b;
		
		a = a + b;
		b = a - b;
		a = a - b;
		
		cout << "a : " <<a << " " << "b : " << b ;
		
	}
	
	
	return 0;
}
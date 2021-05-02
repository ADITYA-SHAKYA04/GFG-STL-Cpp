/*
Given an integer N. 
Write a program to find last digit of the number.
*/

#include <iostream>

using namespace std;

void utility(int n){
	
	int ans = n % 10;
	cout << ans ;
	
}

int main(){
	
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		
		utility(n);
	}
	
	return 0;
}
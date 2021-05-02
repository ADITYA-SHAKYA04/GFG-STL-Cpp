/*
Given two positive integers a and b. 
Your task is to perform right shift bitwise operation on it as given below:
Do a>>b.
*/

#include <iostream>

using namespace std;

void utility(int a, int b){
	int ans = (a/(pow(2,b)));
	
	cout << ans;
}

int main (){
	
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	
	while(t--){
		
		int a, b;
		cin >> a >> b;
		
		utility(a, b);
		
	}
	
	
	return 0;
}
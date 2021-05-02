/*
Given 2 integers a and b. Find the value of a/b, where b is not equal to zero.
After computation the answer should be in double format with precised value.
*/

#include <iostream>

using namespace std;

double compute (int a, int b){
	
	double ans = (double)(a)/ (double)(b);
	return ans;
	
}

int main(){
	
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	
	while(t--){
		
		int a, b;
		cout << "Enter the value of a : ";
		cin >> a;
		
		cout << "Enter the number of b : ";
		cin >> b;
		
		cout << compute(a,b) << endl;
		
	}
	
	return 0;
}
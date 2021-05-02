/*
Given an integer N find the sum of the first N natural number.
*/


#include <iostream>

using namespace std;

int nSum(int n){
	
	int ans =0;
	ans = (n*(n+1))/2;
	return ans;
}

int main(){
	
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	
	while(t--){
		int n;
		scanf("%d", &n);
		int ans = nSum(n);
		printf("%d\n", ans);
	}
	
	return 0;
}
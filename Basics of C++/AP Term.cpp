/*
Given three integer, a,d and n. 
Where a is the first term, d is the common difference of an A.P.  
Calculate the nth term of A.P.  
The nth term is given by an = a + (n-1)d
*/

#include <iostream>

using namespace std;


void utility(int a, int b, int n){
	int ans = a + (n-1)*d;
	cout << ans;
}

int main(){
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	
	while(t--){
		int a, d, n;
		cin >> a >> d >> n;
		utility(a, d, n);
	}
	
	return 0;
}
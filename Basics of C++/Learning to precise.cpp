/*

There are times when your answer is a floating point that contains undesired amount of digits after decimal. 
Here, we'll learn how to get a precise answer out of a floating number. 
You are given two floating numbers a and b. You need to output a/b and decimal precision of a/b upto 3 places after the decimal point.

*/

#include <iostream>

using namespace std;

void precise (float a, float b){
	
	cout << a/b << endl;
	
	cout << setprecision(3) << a/b;
}

int main(){
	
	int t;
	cin >> t;
	
	while (t--){
		
		float a,b;
		cin >> a >> b;
		
		precise(a,b);
		
	}
	
	return 0;
}
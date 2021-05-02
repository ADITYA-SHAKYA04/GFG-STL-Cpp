/*
You are given a decTohex() function with number a as parameter. 
Complete the function and print hexadecimal value of 'a'.
*/


#include <iostream>

using namespace std;

void decTohex(int a){
	cout << hex << a;
}

int main(){
	
	int t;
	cout << "Enter the number of test cases : "
	cin >>  t;
	
	while(t--){
		int a;
		cin >> a;
		decTohex(a);
		cout << endl;
	}
	
	return 0;
}
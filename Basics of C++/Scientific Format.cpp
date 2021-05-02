/*
There are times when your answer is a double data type and you want to show the same in scientific format. 
Here, we have to get a scientific format answer out of a double data type. 
You are given one number a. 
You need to output its sceintific format upto 4 precision.
*/

#include <iostream>

using namespace std;

void scientific (double a){
	cout << scientific << setprecision(4) << a;
}

int main(){
	
	int t;
	cout << "Enter the number of test cases : ";
	cin << t;
	
	while(t--){
		double a;
		cin >> a;
		
		scientific(a);
		cout << endl;
	}
	
	return 0;
}
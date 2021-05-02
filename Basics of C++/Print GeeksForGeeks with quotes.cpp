/*
You are given a print() function that should output one statement as "GeeksForGeeks". 
The statement should be with double quotes as shown.
*/

#include <iostream>

using namespace std;

void print(){
	cout << "\"GeeksForGeeks\"";
}

int main(){
	
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	
	while (t--){
		print();
		printf("\n");
	}
	
	return 0;
}
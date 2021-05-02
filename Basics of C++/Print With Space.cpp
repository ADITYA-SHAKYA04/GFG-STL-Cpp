/*
Given two inputs that are store in variables a and b, 
you need to print a and b in a single line with a space separating them.

*/


#include <iostream>

using namespace std;

void utility (char a[], char b[]){
	printf("%s %s\n", a, b);
}

int main(){
	
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	
	while (t--){
		char a[50], b[50];
		scanf("%s %s", &a, &b);
		
		utility(a, b);
	}	
	
	return 0;
}

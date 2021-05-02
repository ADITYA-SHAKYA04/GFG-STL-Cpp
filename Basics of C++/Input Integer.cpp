/*
Given an integer, you need to input it. 
The integer will then be printed after adding 10.
*/

#include <iostream>

using namespace std;

int main(){
	
	int t;
	cout << "Enter the number of test cases : " ;
	scanf("%d", &t);
	
	while(t--){
		
		int myInput ;
		scanf("%d", &myInput);
		
		printf("%d\n", myInput + 10 );
		
	}
	
	return 0;
}
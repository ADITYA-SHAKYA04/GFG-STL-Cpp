/*
Given one variable a, it can be of any datatype like int, long, double, etc. 
You have been given a fun() function with variable 'a' as parameter. 
You have to print its type id name.

*/

#include <iostream>

using namespace std;

void fun(auto a){
	cout << typeid(a).name();
}


int main(){
	
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	
	while (t--){
		
		int c ;
		cout << "Enter 1 for int : " << endl;
		cout << "Enter 2 for double : " << endl;
		cout << "Enter 3 for long long : " << endl;
		cout << "Enter your choice : " ;
		cin >> c;
		
		if (c == 1){
			int a;
			cout << "Enter the value of a : ";
			cin >> a;
			fun(a);
		}
		
		else if (c == 2){
			double a;
			cout << "Enter the value of a : ";
			cin >> a;
			fun(a);
		}
		
		else {
			long long a;
			cout << "Enter the value of a : ";
			cin >> a;
			fun(a);
		}
		cout << endl;
	}
	
	return 0;
	
}
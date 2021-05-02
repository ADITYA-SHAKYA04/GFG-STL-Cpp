/*
Recommended to solve it after completing Function track.

Given 2 numeric values a and b, they can be of any datatype like int, long, double, etc. 
Find the value of (a + b). After computation the answer will have the data type as a and b.

*/

#include <iostream>

using namespace std;

auto add(auto a, auto b){
	auto d = a + b;
}

int main(){
	
	int t;
	cout << "Enter the number the of test cases : ";
	cin >> t;
	
	while(t--){
		
		int c;
		cout << "Enter 1 for int : " << endl;
		cout << "Enter 2 for double : " << endl;
		cout << "Enter 3 for long long : " << endl;
		cout << "Enter your choice : " ;
		cin >> c;
		
		
		if (c == 1){
			int a, b;
			cout << "Enter the value of a : ";
			cin >> a;
			cout << "Enter the value of b : ";
			cin >> b;
			cout << add(a, b) << endl;
		}
		
		else if (c == 2){
			double a, b;
			cout << "Enter the value of a : ";
			cin >> a;
			cout << "Enter the value of b : ";
			cin >> b;
			cout << add(a, b) << endl;
		} 
		
		else {
			long long a, b;
			cout << "Enter the value of a : ";
			cin >> a;
			cout << "Enter the value of b : ";
			cin >> b;
			cout << add(a, b) << endl;
		}
		cout << endl;
	}
	
	return 0;
}
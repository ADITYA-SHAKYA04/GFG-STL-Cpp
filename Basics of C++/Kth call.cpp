/*
You are given a function utility() which prints count  every time it is called.
The function will be called by the driver's code n times.+
*/

#include <iostream>

using namespace std;

void utility(){

	static int count = 0;
	count++;
	cout << count ;

}

int main(){

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	while(n--){
		utility();
		cout << " ";
	}

	return 0;
}

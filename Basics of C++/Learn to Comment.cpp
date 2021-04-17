/*

	Comments are very useful in any language to tell a user what is the task of any function or operation.
	The comments are neglected by the compiler, so whatever you write in the comments won't have any effect on the working of a code.
	In C/C++, comments can be written as mentioned below:

*/

	/*This is a comment*/
	//This is also a comment

#include<iostream>

using namespace std;

void comment(int a, int b, int c){
	cout << a << endl;
	//	cout << b << endl;
	cout << c << endl;
}

int main(){

	int t;
	cin >> t;

	while (t--){

		int a, b, c;
		cin >> a >> b >> c;

		comment(a, b, c);

	}

	return 0;
}

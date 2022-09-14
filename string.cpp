#include<iostream>
using namespace std;
int main()
{
	string s;
	cout<<" enter a string: " ;
	getline (cin, s); // syntax to get the input from user
	cout<< " you have entered: " ; 
	cout<< s << endl;
	s.push_back('Y'); // add an element at the end of string
	cout<< " after using push_back function "<< s<< endl;
	return 0;
}

//IF-ELSE- Conditional statements, used when we want to run the code on the bais of some conditions.
// ststement in If runs if statement is true, ELSE of wrong.

#include <iostream>
using namespace std;
int main()
{
	int number;
	cout<<" Enter a number= " ;
	cin>> number;
	if(number > 0){
		cout<< number<< endl;
		cout<< " the number is positive.";
	}
	else
	{
		cout<< " Negative number, can't be printed!";
	}
	
	return 0;
		
}

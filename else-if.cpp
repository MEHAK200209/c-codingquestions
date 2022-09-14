// C++ if...else...else if statement
//The if...else statement is used to execute a block of code among two alternatives. However, if we need to make a choice between more than two alternatives, we use the if...else if...else statement.
//The syntax of the if...else if...else statement is:

//if (condition1) {
  // code block 1
//}
//else if (condition2){
  // code block 2
//}
//else {
  // code block 3
//}
//If condition1 evaluates to true, the code block 1 is executed.
//If condition1 evaluates to false, then condition2 is evaluated.
//If condition2 is true, the code block 2 is executed.
//If condition2 is false, the code block 3 is executed.
#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<" Enter a number= "; 
	cin>> number;
	if (number< 9){
		cout<<" The number is a 1-digit number"<< number<< endl;
	}
	else if(number >9 and number < 99){
		cout<<" The number is a 2-digit number."<< number<<endl;
	}
	else{
		cout<<" Number is greater than 100 ";
	}
	return 0;
}














// Funtions- A function declaration tells the compiler about a function's name, return type, and parameters. A function definition provides the actual body of the function.
#include<iostream>
using namespace std;
int function(int num1, int num2); //function declaration
int main()
{
	//local  function declaration
	int a = 25;
	int b = 75;
	int ret;
	
	//calling a function
	ret = function(a,b);
	cout<< "Max value is: " << ret <<endl;
	return 0;
}
// function returning the max between two numbers
int function (int num1, int num2) {
   // local variable declaration
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}

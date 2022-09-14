#include<iostream>
using namespace std;
int max(int num1, int num2);
 
int main () {
   // local variable declaration:
   int a; int b;
   	cout<<" Enter value a= ";
	cin>> a;
	cout<<" Enter value b= ";
	cin>> b;
   int ret;
 
   // calling a function to get max value.
   ret = max(a, b);
   cout << "Max value is : " << ret << endl;
 
   return 0;
}
 
// function returning the max between two numbers
int max(int num1, int num2) {
   // local variable declaration
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}

































/*int max (int num1, int num2){
	int results;
	if( num1> num2){
		result = num1;
	}
	else{
		result= num2;
	}
}
int main(){
	cout<<" Enter num1= ";
	cin>> num1;
	cout<<" enter num2= ";
	cin>> num2;
	result = max(num1, num2);
   cout << "Max value is : " << result << endl;
 
   return 0;
	
}
	

/*int max (int num1, int num2){
	int results;
	if( num1> num2){
		result = num1;
	}
	else{
		result= num2;
	}
}*/

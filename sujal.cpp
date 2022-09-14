//Call by Value-  method of passing arguments that are used to a function and copies the actual value of an argument into the formal parameter of the function
#include<bits/stdc++.h>

using namespace std;
void swap(int x, int y)
{
 int temp;
 temp=x;
 x=y;
 y=temp;
}
int main() 
{  
 int x=25, y=50;  
//  clrscr();  
 swap(x, y);   // passing value to function
 cout<<"The Value of x: "<<x;
 cout<<"The Value of y: "<<y;
//  getch();  

return 0;
}  






//Call by Value-  method of passing arguments that are used to a function and copies the actual value of an argument into the formal parameter of the function
#include<iostream.h>
#include<conio.h>
void swap(int x, int y)
{
 int temp;
 temp=x;
 x=y;
 y=temp;
}
void main() 
{  
 int x=25, y=50;  
 clrscr();  
 swap(x, y);   // passing value to function
 cout<<"The Value of x: "<<x;
 cout<<"The Value of y: "<<y;
 getch();  
} 

/*Call by Reference: pass parameters to the function by reference. When we pass the arguments by reference, the formal arguments in the called function become aliases to the actual arguments
 in the calling function that means when the function is working with its arguments. In short,  the memory address of the variable is passed as an arguemnt.*/
#include<iostream.h>
#include<conio.h>
void swap(int *x, int *y)
{
 int temp;
 temp=*x;
 *x=*y;
 *y=temp;
}
void main() 
{  
 int x=25, y=50;  
 clrscr();  
 swap(&a, &b);  // passing value to function
 cout<<"The Value of x:"<<x;
 cout<<"The Value of y:"<<y;
 getch();  
}  

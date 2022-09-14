//pointers- Every variable is a memory location and every memory location has its address defined which can be accessed using ampersand (&) operator which denotes an address in memory.
#include<iostream>
using namespace std;
int main(){
	int var1;
	char var2[10];
	
	cout<<" the address of the variable 1= ";
	cout<< &var1<< endl;
	
	cout<<"The address of variable 2= ";
	cout<< &var2<< endl;
	return 0;
}

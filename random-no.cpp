//Random number in c++
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int i,j;
	// set the seed
   srand( (signed)time( NULL ) ); //time() function to get the number of seconds on your system time, to randomly seed the rand() function

   /* generate 10  random numbers. */
   for( i = 0; i < 10; i++ ) {
      // generate actual random number
      j = rand();
      cout <<" Random Number : " << j << endl;
   }

   return 0;
}


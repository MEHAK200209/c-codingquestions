//ARRAYS- Collection of same type of data items, contagious memory allocation, immutable.
#include <iostream>
using namespace std;
 
#include <iomanip> //It is a function which is used to manipulate i/o statements. 
using std::setw; //library funtion
 
int main () {

   int n[ 10 ]; // n is an array of 10 integers
 
   // initialize elements of array n to 0          
   for ( int i = 0; i < 10; i++ ) {
      n[ i ] = i + 151; // set element at location i to i 
   }
   cout << "Element" << setw( 13 ) << "Value" << endl;
 
   // output each array element's value                      
   for ( int j = 0; j < 10; j++ ) {
      cout << setw( 5 )<< j << setw( 13 ) << n[ j ] << endl;
   }
 
   return 0;
}

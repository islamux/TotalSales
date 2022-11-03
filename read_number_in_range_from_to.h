#include <iostream>
using namespace std;

// check number if it s out of range still in loop.
// Read until ..
float ReadNumberInRangeFromTo(int from, int to){

    int numberToCheckFromFuncOr = 0;
    do
    {

      // You could using read input directly but it call function 2 times! ReadNumber()
      cout << "Enter a number between 50000, 1000000: \n"; 
      cin >> numberToCheckFromFuncOr;

    } while ( numberToCheckFromFuncOr < from);
    
      
  return float(numberToCheckFromFuncOr);
}
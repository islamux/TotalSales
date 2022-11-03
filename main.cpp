#include <iostream>
#include "read_number_in_range_from_to.h"
#include "calculate_commission.h"

#include "print_float.h"
#include "check_number_in_range.h"
#include "print_string.h"
#include "print_shapes.h"
#include "length_string.h"

using namespace std;

/*
        * Total Sales 
            * Read number from user 
            * Commission Calculated as Percentage
            * Total Sales 
                 * 1 000 000         =>   Percentage = 1%
                 * 500K to 1M       =>   Percentage = 2%
                 * 100K to 500K    =>   Percentage = 3%
                 * 50K to 100K      =>   Percentage = 5%
                 * Otherwise         =>   Percentage = 0%
                 

    * ReadNumber()

    * ReadNumberINRangeFromTo() 50K to 1M
    * CalculateCommission()
    * 
    * PrintNumber()
*/


int main(){

        // Read number in range 
    float NumberFromRange = ReadNumberInRangeFromTo(50000, 1000000);
    PrintString("Number entered = ");
    PrintFloat(NumberFromRange);

    //  Check Number and get percentage 
    float percentage = CheckNumberInRange(NumberFromRange);
    PrintString("Percentage = ");
    PrintFloat(percentage);
    
    // Calcultion and print
    float final = CalculateCommission(percentage, NumberFromRange);
    PrintString("commission = ");
     PrintFloat(final);

    return 0;
}
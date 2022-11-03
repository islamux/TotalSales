#include <iostream>

using namespace std;


        /* Total Sales 
            * Read number from user 
            * Commission Calculated as Percentage
            * Total Sales 
                 * 1 000 000         =>   Percentage = 1%  ==> 1 000 000 * 1%
                 * 500K to 1M       =>   Percentage = 2%
                 * 100K to 500K    =>   Percentage = 3%
                 * 50K to 100K      =>   Percentage = 5%
                 * Otherwise         =>   Percentage = 0%
        */ 

float CheckNumberInRange(float numberFromReadFunc){
        

       if ( numberFromReadFunc >= 1000000)
                return  0.01 ;

       else if (numberFromReadFunc >=500000 )
                return  0.02 ;
       

       else if (numberFromReadFunc >=100000)
                return 0.03;
       
       else if (numberFromReadFunc >=50000)
                return 0.05;
       
       else
                return 0.00;         
       
        
}
                
        
        


/*
Write macro function that:
1. Receives 2 values in variables.
2. Searches how much `0` bits
3. Executes result with printing of which is have more `0`

If:
1. Theres same number of `0`, it chooses the first and output amount of `0`.

*/

#include <stdio.h>
/*Question2_2010b_87_part1 - START */
#define ARRAY_SIZE 2

#define MAX_BITS(A,B)((counterA) > (counterB) ? (counterA) : (counterB))\
            int mask = 1;   \
            int conterA, counterB;\
            while(mask){    \
                if((numA << mask) == 0)\
                    counterA++;\
                else\
                    counterB++;\
            }               \

/*Question2_2010b_87_part1 - END */

/*Question2_2010b_87_part2 - START */
int /*Question2_2010b_87_part1()*/main(){
    int mask = 1;
    int numA = 3, numB = 2;
    int numberArr[ARRAY_SIZE];

    printf("Number array 0: %i" ,numberArr[0]);
    printf("\n");
    printf("Number array 1: %i" ,numberArr[1]);

    /*printf("Hello World");*/

    return 0;
}
/*Question2_2010b_87_part2 - END */


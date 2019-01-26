#include <stdio.h>

#define ARRAY_SIZE 2
#define max(A,B) ((A) > (B) ? (A) : (B))

Question2_2010b_87_part1(){

    int mask = 1;
    int numA = 1, numB = 2;
    int numberArr[ARRAY_SIZE];

    for(;;){
        if ((numA & mask) == 0)
            numberArr[0] + 1;
        else
            numberArr[1] + 1;
    }

    return max(numberArr[0],numberArr[1]);

}

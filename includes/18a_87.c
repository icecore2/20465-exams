#include <stdio.h>
#include <stdlib.h>
/*********************************************************
// 2018a - Moed 87
// Question 2
// Part 2
 * Question: Write a Macro that counts how much bits turned on.
*************** Question 2 - PART 1 **********************/
#include "18a_87.h"

/*********************************************************
// 2018a - Moed 87
// Question 2
// Part 2
  * Question: Write 2 arrays and print which array has more numbers or they even.
*************** Question 2 - PART 2 **********************/

int Question2_2018a_87() {
    int arr1[] = {2, 4, 7, 12, 16};
    int arr2[] = {2, 4, 7, 14, 4, 24, 5, 3, 8};
    int countBits1, countBits2;

    count_5_bits(arr1, 5, (int )countBits1);
    count_5_bits(arr2, 9, (int )countBits2);

    if (countBits1 > countBits2)
        printf("\nArr1 has more numbers.");
    else if (countBits1 < countBits2)
        printf("\nArr2 has more numbers.");
    else
        printf("Both arrays have the same number of integers with 5 turned ON bits.");

    printf("\ncountBits1:%d \ncountBits2:%d", countBits1, countBits2);
}

/*************** Question 2 - END **********************/

int count_5_bits(int arr[],size_t size,int res) {
    res = 0;
    int i, count;
    printf("\ncounter:");
    for (i = 0; i < size; i++) {
        count = 0;
        unsigned temp = arr[i], mask = 1;
        while (temp) {
            if (temp & mask)
                count++;
            temp >>= 1;
            if (count == 5)
                res++;
        }
        printf("%i,", count);
    }
    return 0;
}



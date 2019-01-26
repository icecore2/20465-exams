

/*************** Question 2 - Part 1 ****************************/
/*TODO Macro with bits counter function */
#define double(a,b){\
        int i,mask;\
        for(i = 0,mask = 1, b = 0; i<sizeof(a) * 8-1; i++, mask <<=1){\
        if((a&mask) && (a&mask <<1))\
            {\
            i++, mask <<= 1;\
        continue;}\
        b|= (a&mask);\
        }\
        b|=(a&mask);}\




/******************************** END ****************************/


/*************** Question 2 - Part 2 ****************************/
#include <stdlib.h>
#define MAX 100
/*
int Question2_2015a_83_part2(int numbers[MAX]){
    int result_arrays[MAX];
    int i, temp_number;

    while(strlen(numbers)){
        double(temp_number, numbers[i]);
        result_arrays[i] = temp_number;
        printf("temp_number  numbers:%i\n", temp_number);
        numbers++;
    }
    printf("New array numbers:%d\n", result_arrays);
    return 0;
}
*/
/*
int Question2_2015a_83_part2(int numbers[MAX]){
    int array[MAX];
    array[MAX] = numbers;
    int i,mask = 1;

    while(array[i] >>= mask){
        printf("Bits:%d\n", ((array[i])&mask>>=1);
        i++;
    }
}
*/
int Question2_2015a_83_part2(int a,int b){
    int x = a ;
    int n = b ;
    x << n ;
    printf("%d\n", x) ;
}
/******************************** END ****************************/

#include <stdio.h>

/*************** Question 3 - Part 1 ****************************/
#define ARR_SIZE 8

int array[ARR_SIZE] = {1,2,3,4,5,6,7,0};
/*#include <stdio.h>  - Already included at top */

void Question3_2015a_87()
{
    int *p;                                 /* Pointer of integer. */
    int i;

    p = &array[0];                          /* Array at p pointer start cell is 0. */
    for(i = 0; i < ARR_SIZE; i++, p++)      /* Loop runs up to ARR_SIZE and adds 1 to 'i' and 'p' each time. */
    {
        if ((*p)%2 == 0)                    /* If it can modulus so print the number. */
            printf("%d\n", *p);
    }
}

void Question3_2015a_87_main(void)/*instead of main(void) */
{
    printf("The numbers are:\n");
    Question3_2015a_87();
}
/******************************** END ****************************/

/*************** Question 3 - Part 2 ****************************/
#define SIZE_ID     9
#define SIZE_ARR    4

typedef struct{
    char id[SIZE_ID];
    int flag_num_courses;
    int flag_average;
    int flag_previous;
} student;

student arr_students[] = {{"111111111",1,1,0},{"222222222",1,0,0},{"333333333",1,1,1},{"444444444",0,0,0},{"555555555",0,1,0}};

char * find_student(student *s){
    /* This if statement checking if number of courses and at least one of other requirements are valid. */
    if (s->flag_num_courses == 0 || (s->flag_average || s->flag_previous) == 0)
        return 0;
    else
        return s->id;
}

void Question3_2015a_87_part2(void)/*student_main(void)*/{
    char *id;
    int i;

    for(i = 0; i < SIZE_ARR; i++)
        if (id = find_student(arr_students + i))
            printf(" student %s was found\n", id);
}
/******************************** END ****************************/

/*************** Question 3 - Part 3 ****************************/
#include <stdlib.h>
#define MIN 0
#define MAX 7

/*
    1.argv waiting for few parameters.
    2.afterwards argc counts how much parameters user wrote.
    2.2 if argc counts 1 parameter, its output will be: "usage: binval parameter list". Example:
        "c:\myprogram.exe" - message will be printed.
        "c:\myprogram.exe 1" - 2 parameters inputed and output will be displayed.
    3. argc will subtracted by 1 each parameter until it get 1 in result and then program stop running.
    4. every number (1-7) will be displayed in it's binary value.
*/
void Question3_2015a_87_part3(int argc, char *argv[]) {
    if (argc == 1)
        printf("usage: binval parameter list\n");
    else
        while (--argc)
            bin_val(atoi(*++argv));
}

void bin_val(int n)
{
    static char* array[]=
            {"000","001","010","011","100","101","110","111"};

    if ((n >= MIN) && (n <= MAX))
        printf("The binary value of %d is %s.\n", n, array[n]);
    else
        printf("Error \n");
}

/******************************** END ****************************/


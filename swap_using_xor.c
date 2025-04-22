#include<stdio.h>

void swap_using_xor(){
    int first, second;
    printf("enter first number:");
    scanf("%d", &first);
    printf("enter second number:");
    scanf("%d", &second);

    first = first^second;
    second = first^second;
    first = first^second;

    printf("first is : %d\n", first);
    printf("second is : %d\n", second );
    printf("\n");
}
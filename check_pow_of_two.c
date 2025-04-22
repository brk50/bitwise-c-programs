#include<stdio.h>

void check_pow_of_two(){
    int n;
    printf("enter the number to check the power of two:");
    scanf("%d",&n);

    if(n == 0)
        printf("%d is not power of 2 \n", n);
    else if((n & n-1) == 0)
        printf("%d is a power of 2\n",n);
    printf("\n");
}
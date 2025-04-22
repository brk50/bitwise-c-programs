#include<stdio.h>

void check_even_odd(){
    long long n;
    printf("enter the number:");
    scanf("%lld", &n);
    if(n & 1)
        printf("%lld is an odd number\n", n);
    else
        printf("%lld is an even number\n",n);
    printf("\n");
}
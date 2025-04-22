#include<stdio.h>

void count_set_bits(){
    int n;
    int count = 0;
    printf("enter number to count set bits: ");
    scanf("%d", &n);
    while(n){
        if(n&1)
            count++;
        n = n>>1;
    }
    printf("number of set bits: %d", count);
    printf("\n");
}
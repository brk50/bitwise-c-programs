#include<stdio.h>

void toggle_kth_bit(){
    int n, k;
    printf("enter the number to toggle: ");
    scanf("%d", &n);
    printf("enter bit to toggle: ");
    scanf("%d", &k);
    n ^= (1<<k);
    printf(" n is: %d after toggling %dth bit", n, k);
}
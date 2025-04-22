#include<stdio.h>

void check_even_odd();
void swap_using_xor();
void count_set_bits();
void check_pow_of_two();
void toggle_kth_bit();

int main(){
    int choice;
    while(1){
        printf("\n===== Bitwise Playground =====\n");
        printf("1. Check Even/Odd\n");
        printf("2. Swap two numbers using xor \n");
        printf("3. Count set bits in a number\n");
        printf("4. Check given number is power of 2 or not\n");
        printf("5. Toggle kth bit in a given number\n");
        printf("0. Exit\n");
        printf("\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        printf("\n");

    switch(choice){
        case 1:
                check_even_odd();
                break;
        case 2:
                swap_using_xor();
                break;
        case 3:
                count_set_bits();
                break;
        case 4:
                check_pow_of_two();
                break;
        case 5:
                toggle_kth_bit();
                break;
        case 0:
                return 0;
        default:
                printf("invalid option");
    }

    }
    return 0;

}
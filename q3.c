#include <stdio.h>

void swapWithTemp(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("After swap: a = %d, b = %d\n", a, b);
}

void swapWithArithmetic(int a, int b) {

    a = a + b;  
    b = a - b;  
    a = a - b;  

    printf("After swap: a = %d, b = %d\n", a, b);
}

void swap_XOR(int a, int b) {

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swap: a = %d, b = %d\n", a, b);
}

void swapWithPointers(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    printf("After swap: a = %d, b = %d\n", *a, *b);
}

int main() {
    int a, b;

    swapWithTemp(a, b);
    swapWithArithmetic(a, b);
    swapWithXOR(a, b);
    swapWithPointers(&a, &b); 

    return 0;
}
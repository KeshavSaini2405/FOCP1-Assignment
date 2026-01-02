#include<stdio.h>

int main()
{
    int elements, first = 0, second = 1, next;

    printf("Enter no. of elements = ");
    scanf("%d", &elements);

    printf("Fibonacci series: ");

    for(int i=1; i<=elements;i++){
        printf("%d", first);
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}

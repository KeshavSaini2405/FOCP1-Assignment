#include <stdio.h>

int main() 
{
    int no1, no2, i, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &no1, &no2);

    for(i = 1; i <= no1 && i <= no2; ++i) 
    {
        if(no1 % i == 0 && no2 % i == 0)
            hcf = i;
    }

    printf("HCF of %d and %d is %d\n", no1, no2, hcf);

    return 0;
}

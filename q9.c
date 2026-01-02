#include <stdio.h>

int main() 
{
    int scores[10];  
    int n, i, nofound = 0;

    printf("Enter the number of scores: ");
    scanf("%d", &n);

    printf("Enter the scores:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    for(i = 0; i < n; i++) {
        if(scores[i] == 99) {
            printf("The first occurrence of score 99 is at position %d.\n", i + 1);
            nofound = 1;
            break; 
        }
    }

    if(!nofound) {
        printf("Score 99 not found in the list.\n");
    }

    return 0;
}
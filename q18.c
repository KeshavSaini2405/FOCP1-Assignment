#include <stdio.h>

int main() {
    int arr[100];
    int n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nDuplicate elements are:\n");
    int found = 0;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found = 1;
                break; 
            }
        }
    }

    if (!found)
        printf("No duplicate elements found.\n");

    return 0;
}
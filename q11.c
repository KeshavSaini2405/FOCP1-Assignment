//  QUES 11 EVEN ARRAY ODD ARRAY
#include<stdio.h>

int main(){
    int scores[10];
    int even_array[10],odd_array[10];
    int i,n ,evenc=0, oddc=0;

    printf("Enter 10 scores: \n");
    for(i=0;i<10;i++){
        scanf("%d", &scores[i]);
    }
    for(i=0;i<10;i++){
        if(scores[i] % 2==0){
            even_array[evenc] = scores[i];
            evenc++;
        }
        else{
            odd_array[oddc] = scores[i];
            oddc++;
        }
    }
    printf("\nEven numbers are: \n");
    for(i=0;i<evenc;i++){
        printf("%d ", even_array[i]);
    }
    
    printf("\nOdd numbers are: \n");
    for(i=0;i<oddc;i++){
        printf("%d ", odd_array[i]);
    }
    return 0;
}
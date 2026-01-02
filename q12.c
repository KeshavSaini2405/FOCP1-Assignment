 #include<stdio.h>
   int main()
   {
    int scores[10];
    int i;
    int max,min;
    
    printf("Enter 10 scores");
     for(i=0;i<10;i++){
    scanf("%d",&scores[i]);
     }

     max=scores[0];
     min=scores[0];

     for(i=0;i<10;i++)
     
     {
        if(scores[i]>max)
        max=scores[i];
        if(scores[i]<min)
        min=scores[i];
   }
     printf("Maximum score is %d",max);
     printf("Minimum score is %d",min);
    return 0;
}
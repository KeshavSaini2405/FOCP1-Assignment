 #include<stdio.h>

    int main()
    {
        int a[10];
        int i;

        printf("Enter the numbers");
        for(i=0;i<10;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<10;i++)
        {
            if((i == 0 || a[i] >= a[i - 1]) && (i == 10 - 1 || a[i] >= a[i + 1]))
        {
            printf("The peak element is %d at position %d",a[i],i+1);
            break ;
        }
    }
    return 0;
}
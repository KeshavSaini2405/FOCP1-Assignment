#include<stdio.h>
#include<math.h>

int main()
{
    int num,n,count=0,temp1,temp2,sum=0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    temp1=num;
    while (temp1>0)
    {
        n=temp1%10;
        temp1=temp1/10;
        count++;
    } 
    printf(" digits %d\n", count);
    temp2=num;
    while(temp2>0)
    {
        n=temp2%10;
        temp2=temp2/10;
        int cal=pow(n,count);
        sum=sum+cal;
    }
    if(sum==num)
        printf("%d is an armstrong number\n", num);
    else
        printf("%d is not an armstrong number\n", num);
    return 0;
}
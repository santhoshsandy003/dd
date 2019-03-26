
#include <stdio.h>

int main()
{
int i,num,sum=0;
    printf("enter a num",num);
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    sum=sum+i;
    printf("sum of first %d natural num=%d\n",num,sum);
}

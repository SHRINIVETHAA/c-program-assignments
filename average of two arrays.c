#include<stdio.h>
int main()
{
    int a[10],i,n,sum=0,avg,sum1=0,avg1,sum2,avg2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
        avg=sum/n;
    }
    for(i=0;i<avg;i++)
    {
        sum1=sum1+a[i];
        avg1=sum1/avg;
    }
    for(i=avg;i<=n;i++)
    {
        sum=sum+i;
        avg2=sum/n-avg;
    }
    for(i<avg2;i<n;i++)
    {
        sum2=sum2+a[i];
        avg2=sum2/avg2;
    }
    if(avg1==avg2)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}

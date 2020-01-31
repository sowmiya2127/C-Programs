#include <stdio.h>

int main()
{
    int a[10],sum=0,i,n;
    float avg;
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
     sum=sum+a[i];
     avg=sum/a[i];
     printf("sum=%d",sum);
     printf("avg=%f",avg);
    }
 }

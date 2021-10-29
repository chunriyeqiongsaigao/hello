#include<stdio.h>
int main()
{   int n;
    scanf("%d",&n);

    int i,j;int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int sum;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           sum+=(arr[i]+arr[j])*11;
        }
    }

    printf("%d",sum);

}
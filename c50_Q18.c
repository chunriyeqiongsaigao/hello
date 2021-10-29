#include<stdio.h>
int main()
{
    int n;
    double sum=0;
    int i,t;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
            sum=sum+1.0/i*t;
                t*=-1;
            printf("%.2lf ",sum);

        }
    }
}
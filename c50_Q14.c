#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {   int i;
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        int k;
        int min=a[0];

        for(i=0;i<n;i++)
        {
            
            if(a[i]<min)
            {
                min=a[i];
                k=i;
            }

            if(i=n-1)
            {
                a[k]=a[0];
                a[0]=min;
            }
            
        }

        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        

    }
}
#include<stdio.h>
int main()
{
    int a,b,c,j,i,k,n;
    scanf("%d",&n);
    double arr1[n][100];
    int arr2[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
        for(j=0;j<arr2[i];j++)
        {
            scanf("%lf",&arr1[i][j]);
        }
    }

    double tem;

    for(i=0;i<n;i++)
    {   
        tem=0;
        for(j=0;j<arr2[i];j++)
        {
            if(arr1[i][j]>tem)
            tem=arr1[i][j];           
        }
        printf("%.2lf\n",tem);

    }

}
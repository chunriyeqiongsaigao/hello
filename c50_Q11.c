#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b)//为后面qsort准备compare
{
    return (*(int*)b-*(int*)a);
}

int main()
{
    int m,n;
    while(scanf("%d %d",&n,&m)==2&&m!=0&&n!=0)
    {
        int a[1000],i;
        for(i=0;i<n;i++)//输入a[]
        {
            scanf("%d",&a[i]);
        }

        qsort(a,n,sizeof(int),compare);//按降序排列a[]
        puts(" ");

        int p;//把m,n中 的较小值赋值给p
        if(n<m)
        {
            p=n;
        }else{
            p=m;
        }

        for(i=0;i<p;i++)//打印大富翁
        {
            printf("%d ",a[i]);
        }



    }
}
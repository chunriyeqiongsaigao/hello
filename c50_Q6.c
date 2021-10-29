#include<stdio.h>
#include<math.h>
int main()
{   int n;
    while(scanf("%d",&n)!=EOF)
    {
       int i,j;
       int a[n];
       for(i=0;i<n;i++)
        {

           scanf("%d",&a[i]); //输入数组a[]
        
        }

        for(j=0;j<n-1;j++)//完成数组排序
        {
            for(i=0;i<n-j-1;i++)
           {
                int HAHA;
                if(fabs(a[i])<fabs(a[i+1]))
                {
                    HAHA=a[i];
                    a[i]=a[i+1];
                    a[i+1]=HAHA;
                }
           }
        }

        for(i=0;i<n;i++)//打印数组
        {
            printf("%d ",a[i]);
        }

    }
 
   

   
}
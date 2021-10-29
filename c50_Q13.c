#include<stdio.h>
int main()
{  int n;
   while(~scanf("%d",&n))
   {   int i,j,a[n][3];
       for(i=0;i<n;i++)//输入a[][]
       {
           for(j=0;j<3;j++)
           {
               scanf("%d",&a[i][j]);
           }
       }

    puts("\n");


    

    for(i=0;i<n;i++)
    {
        if(a[i][0]+a[i][1]>a[i][2])
        {
            printf("Case #%d: true",i+1);
        }else{
            printf("Case #%d: false",i+1);
        }

        puts("\n");
    }

   }
} 
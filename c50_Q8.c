#include<stdio.h>
int main()
{   int n;
    while(scanf("%d",&n)!=EOF)
    {   int i,j;
        int a[n];

        for(i=0;i<n;i++)//输入歌手的成绩,为数组a[n]
        {
            scanf("%d",&a[i]);
        }

        for(j=0;j<n-1;j++)//完成数组排序
        {
            for(i=0;i<n-j-1;i++)
           {
                int HAHA;
                if(a[i]<a[i+1])
                {
                    HAHA=a[i];
                    a[i]=a[i+1];
                    a[i+1]=HAHA;
                }
           }
        }

        

        printf("\n");

        int k;
        int b[n-2];//去掉最高最低分后歌手的成绩，为数组b[]
        for(k=0;k<n-1;k++)
        {
            b[k]=a[k+1];
        }

      
        int sum;

        for(k=0;k<n-2;k++)//求和
        {
            sum+=b[k];   
        }

        double avg;
        avg=sum*1.0/(n-2);

        printf("%lf",avg);//输出歌手平均成绩



    }
}
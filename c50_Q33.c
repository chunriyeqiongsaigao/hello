#include<stdio.h>
#include<math.h>

int main(void)
{
    char a;
    scanf("%c",&a);
    
    int n;//n为列数
    scanf("%d",&n);
    
    puts("\n");

    int m;//m为行数
    m=round(n*1.0/2);

    int i,j;
    for(i=0;i<n;i++)//打印第一行
    printf("%c",a);

    printf("\n");

    for(i=0;i<m-2;i++)
    {   
            printf("%c",a);
        for(j=0;j<n-2;j++)
        {           
            printf(" ");
        }
            printf("%c",a);
            printf("\n");

    }
    for(i=0;i<n;i++)//打印最后一行
        printf("%c",a);   

}
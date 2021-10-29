#include<stdio.h>
int main(void)
{   int a,b;

    printf("请输入第一个数的值：");
    scanf("%d",&a);
    
    printf("请输入第二个数的值：");
    scanf("%d",&b);

    printf(" ");    //没用欧几里得算法，自己想的s

    int c,i;

    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            c=i;
        }
    }

    printf("%d",c);

}
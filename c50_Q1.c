#include<stdio.h>
int main(void)
{  int a,b,c;
 
    puts("请输入三个能构成三角形的实数：");


    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a==b)
    {
        if(a!=c)
        {
            printf("2");
        }
        else
        {
            printf("1");
        }
        
    }
    else
    {
        if(b==c)
        {
            printf("2");
        }
        else
        {
            printf("3");3
        }
    }

    
}
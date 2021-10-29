#include<stdio.h>
int main()
{
    int a,b,c=0,i;
    

    for(i=2;i<=100;i++)
    {
        for(a=2;a<i;a++)
        {
            if(i%a==0)
            {
                goto end;
            }
        }
        printf("%d  ",i);

        c++;//每五个一行
        if(c==5)
        {
            printf("\n");
            c=0;
        }

     end: 
     b=1;//此处b=1无实际意义，只是为了填充end后的空白:)
     
    }    
        
}
#include<stdio.h>
int main()
{
    int a,b,i;
    int arr[10000];
    int j=0;
    

    for(i=2;i<=104729;i++)//104729为第10000个素数
    {    
        for(a=2;a<i;a++)
        {
            if(i%a==0)
            {
                goto end;
            }
        }

        arr[j]=i;
        
        j++;
        
        end: 
        b=1;//此处b=1无实际意义，只是为了填充end后的空白:)
     
    }   

    int M,N;

    while(scanf("%d%d",&M,&N)!=EOF) 
    {
        for(i=M-1;i<N;i++)
        {
            printf("%d ",arr[i]);
        }
    }
        
}
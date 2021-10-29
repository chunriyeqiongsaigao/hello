#include<stdio.h>
int main()
{   int n;
    while(~scanf("%d",&n))
    {   int i,j=0;

        //输入字符数组
        char str[n][100];
        for(i=0;i<n;i++)
        {   char m;
            for(j=0;j<100;j++)
            {
                str[i][j]=getchar();
                if(str[i][j]=='\n')
                j=100 ;
            }
            printf("%s",str);
        }


        //统计各数组中a/e/i/o/u的个数并输出
        for(i=0;i<n;i++)
        {   int a=0,e=0,i=0,o=0,u=0;
            for(j=0;j<100;j++)
            {
              if(str[i][j]='a')
              a++;
              else if(str[i][j]='e')
              e++;
              else if(str[i][j]='i')
              i++;
              else if(str[i][j]='o')
              i++;
              else if(str[i][j]='u')
              u++;
              else
              continue;
           }

           printf("a:%d\n",a);
           printf("e:%d\n",e);
           printf("i:%d\n",i);
           printf("o:%d\n",o);
           printf("u:%d\n",u);

        }



    }
}



/*#include <stdio.h>
int main()
{
    int num1, num2, num3, num4, num5;
    num1 = num2 = num3 = num4 = num5 = 0;
    char c;
    printf("Please type a text: \n");
    while( (c = getchar()) != '#')
    {
        switch(c)
        {
            case 'a':
            case 'A':num1++;
            break;
            case 'e':
            case 'E':num2++;
            break;
            case 'i':
            case 'I':num3++;
            break;
            case 'o':
            case 'O':num4++;
            break;
            case 'u':
            case 'U':num5++;
            break;
            default: break;
        }
    }
    printf("a:%d\n",num1);
    printf("e:%d\n",num2);
    printf("i:%d\n",num3);
    printf("o:%d\n",num4);
    printf("u:%d\n",num5);
    return 0;
}
 

*/


/*#include<stdio.h>
int main()
{   int a,b;
    while(scanf("%d %d",&a,&b)!=EOF&&a!=b)
    {   int m,n;
        if(a<b)
        m=a,n=b;
        else
        m=b,n=a;

    
        int i;
        int e,f;
        int target;

        if(n%m==0)
        target=n;
        goto label;

        for(i=m-1;i>1;i--)
        {
            if(m%i==0&&n%1==0)
            {
                e=m/i;
                printf("%d",e);
                f=n/i;
                printf("%d",f);

                if(n%m==0)
                target=n;
                else
                target=i*e*f;
                break;
            }
        }
        printf("%d",target);

        label:

        printf("%d",target);
    }

    
}*/

#include<stdio.h>
int main()
{
	int i=0;
	int m,n,temp;
	
	scanf("%d %d",&m,&n);
	if(m<n)   //比较大小，使m为较大数，n为较小数 
	{
		temp=n;
		n=m;
		m=temp;
	}
	for(i=m;i>0;i++)   //从较大数开始寻找符合条件的最小公倍数 
	{
		if(i%m==0 && i%n==0)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}  


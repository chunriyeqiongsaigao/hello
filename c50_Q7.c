#include<stdio.h>
int main(){
	int i,n,x,sum;
	while(scanf("%d",&n)!=EOF)
    {
		sum=1;
		for(i=0;i<n;i++){
			scanf("%d",&x);
			if(x%2==1||x%2==-1)    //或者x%2!=0，因为有可能输入负奇数
				sum*=x;
		}
		printf("%d\n",sum);
	}
	return 0;
}
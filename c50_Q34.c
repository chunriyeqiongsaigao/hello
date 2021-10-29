#include<stdio.h>
int main(void)
{   int n;
    scanf("%d",&n);
    int i,j,k;
    int a[n][4];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i][0]);
        scanf("%d",&a[i][1]);
        scanf("%d",&a[i][2]);
        scanf("%d",&a[i][3]);
    }

    int b,c;

    for(i=0;i<n;i++)
    {
        if(a[i][0]+a[i][2]==a[i][1]&&a[i][0]+a[i][2]!=a[i][3])
        c++;
        else if(a[i][0]+a[i][2]==a[i][3]&&a[i][0]+a[i][2]!=a[i][1])
        b++;
        else
        continue;
    }

    printf("%d %d",b,c);
    return 0;
}
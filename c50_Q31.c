#include<stdio.h>
int main()
{
    int n;
    int i;
    int a[n][2];

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i][1]);
        scanf("%d",&a[i][2]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i][1]%a[i][2]==0)
        printf("YES\n");
        else
        printf("NO\n");
    }

    return 0;


}
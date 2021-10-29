#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);

    int a,b,c;//a为个位数字，b为十位数字，c为百位数字
    a=n%10;
    b=(n%100-n%10)/10;
    c=(n%1000-n%100)/100;

    char str[30];
    int i,j;
    int arr[a];
    for(i=0;i<c;i++)//填充字符数组str[30]
    str[i]='b';
    for(i=0;i<b;i++)//继续填充字符数组str[30]
    str[c+i]='s';
    for(i=0;i<a;i++)//填充数组arr[a]
    arr[i]=i+1;

    printf("%s",str);
    for(i=0;i<a;i++)
    printf("%d",arr[i]);
    

    return 0;
}
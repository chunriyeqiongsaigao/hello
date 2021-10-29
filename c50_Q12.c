#include <stdio.h>

int main(void){
    int n = 0, steps = 0;
    scanf("%d", &n);
    while (n != 1){
        if (n % 2 ==0)
            n /= 2;
        else
            n = (3*n+1)/2;
        ++steps;
    }
    printf("%d", steps);
    return 0;
}

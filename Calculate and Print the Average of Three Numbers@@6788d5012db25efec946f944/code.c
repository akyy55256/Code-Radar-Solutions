#include <stdio.h>
int main() {
    int a,b,c,average;
    average=0;
    scanf("%d%d%d",&a,&b,&c);
    average=(a+b+c)/3;
    printf("Average: %.2d",average);
    return 0;
}
#include <stdio.h>
int main() {
    int a,b,c,average;
    average=0;
    scanf("%d%d%d",&a,&b,&c);
    average=(a+b+c)/3;
    printf("Average: %.2f",average);
    return 0;
}
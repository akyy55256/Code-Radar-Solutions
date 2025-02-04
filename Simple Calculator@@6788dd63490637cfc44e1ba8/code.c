#include <stdio.h>
int main() {
    int a,b;
    char sign;
    scanf("%d%d%c",&a,&b,&sign);
    switch(sign){
        case('+'):
        printf("%d",a+b);
        case('-'):
        printf("%d",a-b);
        case('*'):
        printf("%d",a*b);
        case('/'):
        printf("%d",a/b);
        default:
        printf("error");
    }
    return 0;
}
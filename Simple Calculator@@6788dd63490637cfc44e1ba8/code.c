#include <stdio.h>
int main() { 
    int a,b;
    char '+','-','*','/';
    scanf("%d %d",&a,&b);
    if('+'){
        printf("sum %d",a+b);
    }
    else if('-'){
        printf("sum %d",a-b);
    }
    else if('*'){
        printf("sum %d",a*b);
    }
    else if('/'){
        printf("sum %d",a/b);
    }
    else{
        printf("error");
    }
    }
    return 0;
}
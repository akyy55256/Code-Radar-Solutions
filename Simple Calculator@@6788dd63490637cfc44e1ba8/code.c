#include <stdio.h>
int main() { 
    int a,b;
    char ch;
    scanf("%d %d %c",&a,&b,&c);
    if(ch=='+'){
        printf("sum %d",a+b);
    }
    else if(ch=='-'){
        printf("sum %d",a-b);
    }
    else if(ch=='*'){
        printf("sum %d",a*b);
    }
    else if(ch=='/'){
        printf("sum %d",a/b);
    }
    else{
        printf("error");
    }
    return 0;
}
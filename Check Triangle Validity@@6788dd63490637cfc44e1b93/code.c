#include <stdio.h>
int main() {
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c){
    printf("Valid");
    }
    else if(a+c>b){
        printf("Valid");
    }
    else if(b+c>a){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}
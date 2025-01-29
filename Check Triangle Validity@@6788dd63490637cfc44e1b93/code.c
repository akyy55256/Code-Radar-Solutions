#include <stdio.h>
int main() {
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c){
    printf("Valid\n");
    }
    else if(a+c>b){
        printf("Valid\n");
    }
    else if(b+c>a){
        printf("Valid\n");
    }
    else{
        printf("Invalid\n");
    }
    return 0;
}
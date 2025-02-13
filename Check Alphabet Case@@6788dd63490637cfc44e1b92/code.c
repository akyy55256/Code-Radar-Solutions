#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=97&&n<=122){
        printf("Uppercase");
    }
    else if(n>=65&&n<=90){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}
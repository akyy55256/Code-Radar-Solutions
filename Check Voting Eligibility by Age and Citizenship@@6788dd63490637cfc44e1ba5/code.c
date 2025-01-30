#include <stdio.h>
int main() {
    int age,citizen status;
    scanf("%d%d",&age,&citizen status);
    if(age>=18){
        if(citizen status==1){
            printf("Eligible");
        }
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}
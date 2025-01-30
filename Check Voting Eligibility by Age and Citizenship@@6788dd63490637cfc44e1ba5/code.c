#include <stdio.h>
int main() {
    int age,citizenstatus;
    scanf("%d%d",&age,&citizenstatus);
    if(age>=18){
        if(citizenstatus==1){
            printf("Eligible");
        }
        else{
            printf("Not Eligible");
        }
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n>0){
        printf("Profit");
    }
    else if(n<0){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}
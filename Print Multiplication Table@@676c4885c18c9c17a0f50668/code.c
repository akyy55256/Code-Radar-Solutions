#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        if(n%2==0){
            printf("%d",n);
        }
        else{
            continue;
        }
    }
    return 0;
}
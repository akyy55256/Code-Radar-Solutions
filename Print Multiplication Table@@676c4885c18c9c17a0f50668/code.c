#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        for(int j=0;j<=n;j++){
            printf("%d x %d = %d\t",j,i,i*j);
        }
        printf("\n");
    }
    return 0;
}
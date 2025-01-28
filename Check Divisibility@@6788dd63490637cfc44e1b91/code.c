#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n%5==0 && n%11==0){
        print("Divisible");
    }
    else{
        print("Not Divisible");
    }
    return 0;
}
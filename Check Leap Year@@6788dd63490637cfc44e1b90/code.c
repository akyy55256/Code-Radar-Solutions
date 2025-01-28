#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n%4==0){
        print("Leap Year");
    }
    else{
        print("Not a Leap Year");
    }
    return 0;
}
#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if((ch=a,e,i,o,u)||(ch=A,E,I,O,U)){
        printf("Vowel");
    }
    else if(ch=0,1,2,3,4,5,6,7,8,9){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}
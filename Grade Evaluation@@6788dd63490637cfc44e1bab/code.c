#include <stdio.h>
int main() {
    char food;
    char A,B,C,D,F;
    scanf("%c&c%c%c%c%c"&food,&A,&B,&C,&D,&F);
    switch(food){
        case ('A'):
        printf("Excellent");
        break;
        case ('B'):
        printf("Good");
        break;
        case ('C'):
        printf("Average");
        break;
        case('D'):
        printf("Below Average");
        case('F'):
        printf("Fail");
        break;
        default:
        printf("Inavlid grade");

    }
    return 0;
}
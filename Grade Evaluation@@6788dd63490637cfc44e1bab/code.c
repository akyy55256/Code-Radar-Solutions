#include <stdio.h>
int main() {
    char food;
    scanf("%c", &food)
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
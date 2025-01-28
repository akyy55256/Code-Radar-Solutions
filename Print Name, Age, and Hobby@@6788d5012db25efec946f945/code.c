#include <stdio.h>
int main() {
    char name[60];
    scanf("%s",&name);
    printf("Name: %s\n",name);
    
    int age;
    scanf("%d",&age);
    printf("Age: %d\n",age);

    char hobby[60];
    scanf("%s",&hobby);
    printf("Hobby: %s\n",hobby);
    return 0;
}
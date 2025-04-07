#include <stdio.h>
#include <ctype.h>

void caesarCipher(char *message, int shift) {
    char ch;
    for (int i = 0; message[i] != '\0'; ++i) {
        ch = message[i];

        if (isalpha(ch)) {
            char base = islower(ch) ? 'a' : 'A';
            message[i] = (ch - base + shift) % 26 + base;
        }
    }
}

int main() {
    char message[1000];
    int shift;

    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    printf("Enter shift value: ");
    scanf("%d", &shift);

    caesarCipher(message, shift);
    printf("Encrypted message: %s", message);

    return 0;
}

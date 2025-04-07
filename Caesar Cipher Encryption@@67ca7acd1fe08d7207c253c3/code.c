#include <stdio.h>
#include <ctype.h>
#include <string.h>

void caesarCipher(char *message, int shift) {
    char ch;
    for (int i = 0; message[i] != '\0'; ++i) {
        ch = message[i];

        if (isalpha(ch)) {
            char base = islower(ch) ? 'a' : 'A';
            message[i] = (ch - base + shift + 26) % 26 + base;
        }
    }
}

int main() {
    char message[1000];
    int shift;

    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    // Remove newline if exists
    size_t len = strlen(message);
    if (len > 0 && message[len - 1] == '\n') {
        message[len - 1] = '\0';
    }

    printf("Enter shift value: ");
    scanf("%d", &shift);

    caesarCipher(message, shift);
    printf("Encrypted message: %s\n", message);

    return 0;
}

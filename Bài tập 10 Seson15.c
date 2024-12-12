#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "bcdac";
    int number[256] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        number[(int)str[i]]++;
    }
    printf("Output:\n");
    for (int i = 0; i < 256; i++) {
        if (number[i] > 0) {
            printf("%c: %d\n", i, number[i]);
        }
    }

    return 0;
}

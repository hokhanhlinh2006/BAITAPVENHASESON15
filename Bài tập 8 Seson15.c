#include <stdio.h>
#include <ctype.h>
int main() {
    char str[] = "hello world";
    int i;

    if (str[0] != ' ') {
        str[0] = toupper(str[0]);
    }
    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            str[i + 1] = toupper(str[i + 1]);
        }
    }
    printf("Output: %s\n", str);

    return 0;
}

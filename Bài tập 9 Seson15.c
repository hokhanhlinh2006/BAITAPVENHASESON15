#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello world";
    char num[100];
    char inRemove;
    int j = 0;
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &inRemove);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != inRemove) {
            num[j] = str[i];
            j++;
        }
    }
    num[j] = '\0';

    printf("Chuoi sau khi xoa ky tu '%c': %s\n", inRemove, num);
    return 0;
}

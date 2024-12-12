#include <stdio.h>

int main() {
    char str[] = "Hello my gmail is test123@gmail.com";
    int length = 0, number = 0, dacbiet = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            length++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            number++;
        } else if (str[i] != ' ') {
            dacbiet++;
        }
    }

    printf("Chu cai: %d\n", length);
    printf("Chu so: %d\n", number);
    printf("Dac biet: %d\n", dacbiet);

    return 0;
}

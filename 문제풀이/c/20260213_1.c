#include <stdio.h>
#include <string.h>

void fn(char *str) {
    char temp;
    int i, length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main(void) {
    char str[] = "helloworlds";
    fn(str);
    printf("%s", str); // sdlrowolloeh
    return 0;
}
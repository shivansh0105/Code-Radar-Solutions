#include <stdio.h>

int main() {
    char str[100];
    printf("");
    fgets(str, sizeof(str), stdin);
    printf("You entered: %s", str);

    return 0;
}

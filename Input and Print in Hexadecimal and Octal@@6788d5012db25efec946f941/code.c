#include <stdio.h>

int main() {
    int decimal_number;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal_number);

    printf("Hexadecimal: %X\n", decimal_number);
    printf("Octal: %o\n", decimal_number);

    return 0;
}

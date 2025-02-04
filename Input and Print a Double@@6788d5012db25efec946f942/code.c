#include <stdio.h>

int main() {
    double num;

    // Prompt user for input
    printf("Enter a double value: ");
    
    // Read the double value
    scanf("%lf", &num);
    
    // Print the double value
    printf("You entered: %lf\n", num);

    return 0;
}

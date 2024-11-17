#include <stdio.h>

// preprocessor command 
# include <stdio.h>

// function --> helps to organize the code
int main(){
    printf("Hello world \n");

    // Integer type 
    int age = 25; 
    printf("Age: %d\n", age);

    // Float type
    float height = 5.9;
    printf("Height: %.1f feet\n", height);

    // Double type
    double distance = 12345.6789;
    printf("Distance: %.4lf meters\n", distance);

    // Character type
    char initial = 'A';
    printf("Initial: %c\n", initial);

    // Integer arithmetic
    int a = 10, b = 5;
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    printf("\nArithmetic Operations:\n");
    printf("Sum: %d + %d = %d\n", a, b, sum);
    printf("Difference: %d - %d = %d\n", a, b, difference);
    printf("Product: %d * %d = %d\n", a, b, product);
    printf("Quotient: %d / %d = %d\n", a, b, quotient);
    printf("Remainder: %d %% %d = %d\n", a, b, remainder);

    // Float arithmetic
    float x = 3.2, y = 1.1;
    float fsum = x + y;
    float fdifference = x - y;
    float fproduct = x * y;
    float fquotient = x / y;

    printf("\nFloat Arithmetic Operations:\n");
    printf("Sum: %.2f + %.2f = %.2f\n", x, y, fsum);
    printf("Difference: %.2f - %.2f = %.2f\n", x, y, fdifference);
    printf("Product: %.2f * %.2f = %.2f\n", x, y, fproduct);
    printf("Quotient: %.2f / %.2f = %.2f\n", x, y, fquotient);

    return 0; // retrun value
}
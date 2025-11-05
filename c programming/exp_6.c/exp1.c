#include <stdio.h>

// Structure to represent a complex number
struct Complex {
    float real;
    float imag;
};

// Function to read a complex number
struct Complex readComplex() {
    struct Complex num;
    printf("Enter the real part: ");
    scanf("%f", &num.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &num.imag);
    return num;
}

// Function to display a complex number
void writeComplex(struct Complex num) {
    printf("%.1f + %.1fi", num.real, num.imag);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex n1, struct Complex n2) {
    struct Complex result;
    result.real = n1.real + n2.real;
    result.imag = n1.imag + n2.imag;
    return result;
}

// Function to subtract two complex numbers
struct Complex subtractComplex(struct Complex n1, struct Complex n2) {
    struct Complex result;
    result.real = n1.real - n2.real;
    result.imag = n1.imag - n2.imag;
    return result;
}

int main() {
    struct Complex num1, num2, sum, difference;

    printf("Enter the first complex number:\n");
    num1 = readComplex();

    printf("\nEnter the second complex number:\n");
    num2 = readComplex();

    sum = addComplex(num1, num2);
    difference = subtractComplex(num1, num2);

    printf("\nThe first complex number is: ");
    writeComplex(num1);

    printf("\nThe second complex number is: ");
    writeComplex(num2);

    printf("\n\nThe sum of the two complex numbers is: ");
    writeComplex(sum);

    printf("\nThe difference of the two complex numbers is: ");
    writeComplex(difference);

    return 0;
}

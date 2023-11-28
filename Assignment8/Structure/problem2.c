///2. Define a structure “complex” (typedef) to read two complex numbers and perform addition, subtraction of these two complex numbers and display the result.
#include <stdio.h>

// Define a structure "complex"
typedef struct {
    float real;
    float imag;
} Complex;

// Function to add two complex numbers
Complex addComplex(Complex num1, Complex num2) {
    Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

// Function to subtract two complex numbers
Complex subtractComplex(Complex num1, Complex num2) {
    Complex result;
    result.real = num1.real - num2.real;
    result.imag = num1.imag - num2.imag;
    return result;
}

int main() {
    Complex complexNum1, complexNum2, sum, difference;

    // Input the first complex number
    printf("Enter the real part of the first complex number: ");
    scanf("%f", &complexNum1.real);
    printf("Enter the imaginary part of the first complex number: ");
    scanf("%f", &complexNum1.imag);
    // Input the second complex number
    printf("Enter the real part of the second complex number: ");
    scanf("%f", &complexNum2.real);
    printf("Enter the imaginary part of the second complex number: ");
    scanf("%f", &complexNum2.imag);

    // Perform addition and subtraction
    sum = addComplex(complexNum1, complexNum2);
    difference = subtractComplex(complexNum1, complexNum2);

    // Display the results
    printf("\nSum: %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Difference: %.2f - %.2fi\n", difference.real, difference.imag);

    return 0;
}
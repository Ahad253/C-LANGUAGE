#include <stdio.h>

struct complexno {
    float real;
    float imaginary;
};

struct complexno add(struct complexno num1, struct complexno num2) {
    struct complexno result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

int main() {
    struct complexno s[2], sum;
    int i;

    for (i = 0; i < 2; i++) {
        printf("Enter the complex number%d:i", i + 1);
        scanf("%f",&s[i].imaginary);
        printf("+");
        scanf("%f",&s[i].real);
    }

    sum = add(s[0], s[1]);

    printf("Sum of complex numbers: %.2f + %.2fi\n", sum.real, sum.imaginary);

    return 0;
}


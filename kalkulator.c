#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    // Input dari pengguna
    printf("Masukkan angka pertama: ");
    scanf("%lf", &num1);
    printf("Masukkan operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Spasi sebelum %c untuk menangani newline
    printf("Masukkan angka kedua: ");
    scanf("%lf", &num2);

    // Operasi berdasarkan input operator
    switch(operator) {
        case '+':
            printf("Hasil: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Hasil: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Hasil: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Hasil: %.2f\n", num1 / num2);
            else
                printf("Error: Pembagian dengan nol!\n");
            break;
        default:
            printf("Operator tidak valid.\n");
    }

    return 0;
}

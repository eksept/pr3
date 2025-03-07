#include <stdio.h>
#include <stdlib.h>

void swapValues(double *p1, double *p2) {
    double temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    double *num1 = (double *)malloc(sizeof(double));
    double *num2 = (double *)malloc(sizeof(double));
    double *num3 = (double *)malloc(sizeof(double));

    if (!num1 || !num2 || !num3) {
        printf("Ошибка выделения памяти\n");

        free(num1);
        free(num2);
        free(num3);

        return 1;
    }

    *num1 = 10.35;
    *num2 = -3.50;
    *num3 = 16.20;

    printf("До: num1 = %.2f, num2 = %.2f, num3 = %.2f\n", *num1, *num2, *num3);

    swapValues(num1, num2);

    printf("После: num1 = %.2f, num2 = %.2f, num3 = %.2f\n", *num1, *num2, *num3);

    free(num1);
    free(num2);
    free(num3);

    return 0;
}

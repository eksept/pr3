#include <stdio.h>

void modifyValues(int *num1, int *num2) {
    *num1 *= 2;
    *num2 /= 2;
}

int main() {
    int first, second;

    printf("Введите два числа: ");
    scanf("%d %d", &first, &second);

    modifyValues(&first, &second);

    printf("Result: first = %d, second = %d\n", first, second);
    return 0;
}

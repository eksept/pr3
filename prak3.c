#include <stdio.h>
#include <stdlib.h>

void analyzeNegativeNumbers(int *arr, int size) {
    int sum = 0, count = 0;

    printf("Отрицательные числа находятся на позициях: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            printf("%d ", i);
            sum += arr[i];
            count++;
        }
    }

    if (count > 0) {
        printf("\nСреднее арифметическое отрицательных чисел: %.2f\n", (double)sum / count);
    } else {
        printf("нет.\n");  // Теперь текст продолжается на одной строке.
    }
}

int main() {
    int n;

    printf("Введите размер массива: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Ошибка: размер массива должен быть положительным числом.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }

    printf("Введите %d чисел массива: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    analyzeNegativeNumbers(arr, n);

    free(arr);
    return 0;
}

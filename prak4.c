#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(double *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(&arr[i], &arr[minIndex]);
    }
}

int main() {
    int n, count = 0;

    printf("Введите размер массива: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Ошибка: размер массива должен быть положительным числом.\n");
        return 1;
    }

    double *inputArray = (double *)malloc(n * sizeof(double));
    if (!inputArray) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }

    printf("Введите %d чисел массива: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &inputArray[i]);
        if (inputArray[i] > 0) {
            count++;
        }
    }

    if (count > 0) {
        double *processedArray = (double *)malloc(count * sizeof(double));
        if (!processedArray) {
            printf("Ошибка выделения памяти\n");
            free(inputArray);
            return 1;
        }

        int index = 0;
        for (int i = 0; i < n; i++) {
            if (inputArray[i] > 0) {
                processedArray[index++] = sqrt(inputArray[i]) / 5.0;
            }
        }

        selectionSort(processedArray, count);

        printf("Отсортированный массив: ");
        for (int i = 0; i < count; i++) {
            printf("%.2f ", processedArray[i]);
        }
        printf("\n");

        free(processedArray);
    } else {
        printf("Нет положительных чисел для обработки.\n");
    }

    free(inputArray);
    return 0;
}

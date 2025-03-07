#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void selectionSort(double *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        double temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int n, count = 0;
    printf("Введите размер массива: ");
    scanf("%d", &n);
    
    double *b = (double *)malloc(n * sizeof(double));
    double *c = (double *)malloc(n * sizeof(double));
    if (!b || !c) {
        printf("Ошибка памяти\n");
        return 1;
    }
    
    printf("Введите %d чисел массива: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &b[i]);
        if (b[i] > 0) {
            c[count++] = sqrt(b[i]) / 5.0;
        }
    }
    
    if (count > 0) {
        selectionSort(c, count);
        printf("Отсортированный массив C: ");
        for (int i = 0; i < count; i++) {
            printf("%.2f ", c[i]);
        }
        printf("\n");
    } else {
        printf("Нет положительных чисел для обработки.\n");
    }
    
    free(b);
    free(c);
    return 0;
}

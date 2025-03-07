#include <stdio.h>

void processNumbers(int *x, int *y) {
    *x *= 2;  
    *y /= 2;  
}

int main() {
    int a, b;
    printf("Введите два числа: ");
    scanf("%d %d", &a, &b);
    
    int *ptrO = &a, *ptrG = &b;
    processNumbers(ptrO, ptrG);
    
    printf("Result: a = %d, b = %d\n", a, b);
    return 0;
}

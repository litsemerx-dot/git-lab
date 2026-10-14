#include <stdio.h>

int main(void){
    int a = 0, b = 0;
    printf("Введите два целых числа: ");
    scanf("%d %d", &a, &b);

    printf("Ваши числа: %d %d\n", a, b);
    return 0;
}
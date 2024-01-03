#include <stdio.h>
#include <locale.h>
int main() {
    // Оголошення масиву
    int array[10];
    setlocale(LC_ALL, "ukr");
    // Запит користувача для введення елементів масиву
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < 10; ++i) {
        printf("element[%d]: ", i);
        scanf_s("%d", &array[i]);
    }
    // Виведення елементів масиву в зворотньому порядку
    printf("Масив у зворотньому порядку:\n");
    for (int i = 10 - 1; i >= 0; --i) {
        printf("%d ", array[i]);
    }

    return 0;
}


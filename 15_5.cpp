#include <stdio.h>
#include <locale.h>
int main() {
    // ���������� ������
    int array[10];
    setlocale(LC_ALL, "ukr");
    // ����� ����������� ��� �������� �������� ������
    printf("������ �������� ������:\n");
    for (int i = 0; i < 10; ++i) {
        printf("element[%d]: ", i);
        scanf_s("%d", &array[i]);
    }
    // ��������� �������� ������ � ����������� �������
    printf("����� � ����������� �������:\n");
    for (int i = 10 - 1; i >= 0; --i) {
        printf("%d ", array[i]);
    }

    return 0;
}


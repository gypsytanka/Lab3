#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    double frequency;
    double speed_of_light = 299792458.0; // �������� ����� � �/�

    setlocale(LC_CTYPE, "");

    printf("��������� ��� ������� ����� ����� �� ������� �������\n");
    printf("������� ������� ������� (50-200 ���): ");

    scanf("%lf", &frequency);

    // ��������� �������� ������
    if (frequency < 50 || frequency > 200) {
        printf("������: ������� ������ ���� � ��������� 50-200 ���!\n");
        return 1;
    }

    // ��������� ��� � �� (1 ��� = 10^9 ��)
    double frequency_Hz = frequency * 1000000000.0;

    // ������������ ����� �����
    double wavelength = speed_of_light / frequency_Hz;

    // ������� ����������
    printf("\n���������� �������:\n");
    printf("�������: %.2f ���\n", frequency);
    printf("����� �����: %.6f ������\n", wavelength);

    return 0;
}



    

    
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    double frequency;
    double speed_of_light = 299792458.0; // скорость света в м/с

    setlocale(LC_CTYPE, "");

    printf("Программа для расчета длины волны по частоте сигнала\n");
    printf("Введите частоту сигнала (50-200 ГГц): ");

    scanf("%lf", &frequency);

    // Проверяем диапазон частот
    if (frequency < 50 || frequency > 200) {
        printf("Ошибка: частота должна быть в диапазоне 50-200 ГГц!\n");
        return 1;
    }

    // Переводим ГГц в Гц (1 ГГц = 10^9 Гц)
    double frequency_Hz = frequency * 1000000000.0;

    // Рассчитываем длину волны
    double wavelength = speed_of_light / frequency_Hz;

    // Выводим результаты
    printf("\nРезультаты расчета:\n");
    printf("Частота: %.2f ГГц\n", frequency);
    printf("Длина волны: %.6f метров\n", wavelength);

    return 0;
}



    

    
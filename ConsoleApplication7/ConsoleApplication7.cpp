
#include <iostream>
#include <cmath>
#include <locale>
#include <stdlib.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    /**
    * л/р 5 Одномерные массивы
    * Вариант 21 задание 2
    Дан массив размера N. Осуществить сдвиг элементов массива влево
    на одну позицию (при этом AN перейдет в AN −1, AN −1 — в AN −2, . . .,
    A2 — в A1, a исходное значение первого элемента будет потеряно).
    Последний элемент полученного массива положить равным 0.
    Ввод значений массива производится с клавиатуры.
    */
    setlocale(LC_ALL, "ru");
    int n;
    cout << "Введите размер массива : "; cin >> n;
    //Массив
    int* mas = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "элемент массива номер " << i << ": ";
        cin >> mas[i];
    }
    for (int i = 0; i < n - 1; i++) {
        mas[i] = mas[i + 1];
    }
    mas[n - 1] = 0;
    cout << "Измененный массив :";
    for (int i = 0; i < n; i++) {
        cout << mas[i] << " ";
    }
}

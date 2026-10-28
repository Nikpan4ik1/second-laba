#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");


    int mass[10];
    int size;
    int chislo;

    cout << "Введите размер массива: ";
    cin >> size;
    if (size <= 0) {
        cout << "Ошибка. Размер массива должен быть больше нуля." << endl;
        return 1;
    if (cin.fail()) {
        cout << "Ошибка. Введите число." << endl;
        return 1;
    }

    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < size ; i++) {
        cin >> mass[i];
        if (cin.fail()) {
            cout << "Ошибка. Введите числа/о." << endl;
            return 1;
        }
    }

    cout << "Введите число для поиска: ";
    cin >> chislo;
    if (chislo <= 0) {
        cout << "Ошибка. Размер массива должен быть больше нуля." << endl;
        return 1;
    if (cin.fail()) {
        cout << "Ошибка. Введите число." << endl;
        return 1;
    }

    for (int i = 0; i < size; i++) {
        if (mass[i] == chislo) {
            cout << "Число " << chislo << " найдено в массиве под номером "<< i+1 << endl;
            return 0;
        }
        else {
            cout << "Число " << chislo << " не найдено в массиве." << endl;
            return 0;
        }
    }
    return 0;
}
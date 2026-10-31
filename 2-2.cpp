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
    }
    if (cin.fail()) {
        cout << "Ошибка. Введите число." << endl;
        return 1;
    }

    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < size ; i++) {
        if (cin.fail()) {
            cout << "Ошибка. Введите числа/о." << endl;
            return 1;
        }
        cin >> mass[i];
    }
     
    for (int i = 0; i < size -1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (mass[j] > mass[j + 1]) {
                int zamena = mass[j];
                mass[j] = mass[j + 1];
                mass[j + 1] = zamena;
            }
        }
    }

    // cout << "Элементы массива: ";
    // for (int i = 0; i < size; i++) {
    //     cout << mass[i] <<", " ;
    // }
    // cout << ""<< endl;

    cout << "Введите число для поиска: ";
    cin >> chislo;
    if (chislo <= 0) {
        cout << "Ошибка. Размер массива должен быть больше нуля." << endl;
        return 1;
    }
    if (cin.fail()) {
        cout << "Ошибка. Введите число." << endl;
        return 1;
    }

    int result = -1;
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (mass[mid] == chislo) {
            result = mid;
            break;
        }
        else if (mass[mid] < chislo) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (result == -1) {
        cout << "Этого числа нет в массиве." << endl;
    } else {
        cout << "Число " << chislo << " найдено под индексом " << result << " (позиция " << result + 1 << ")" << endl;
    }
    return 0;
}
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int size;


    cout << "Введите размер массива: ";
    cin >> size;
    int mass[size];

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
        cin >> mass[i];
        if (cin.fail()) {
            cout << "Ошибка. Введите числа/о." << endl;
            return 1;
        }
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

    cout << "Элементы массива: ";
    for (int i = 0; i < size; i++) {
        cout << mass[i] <<", " ;
    }
    return 0;
}

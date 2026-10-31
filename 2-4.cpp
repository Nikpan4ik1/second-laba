#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru-RU.UTF-8");
    
    int m[10];
    int k;
    int size;

    cout << "Введите размер массива: ";
    cin >> size;

    if (cin.fail()) {
                cout << "Ошибка. Введите число." << endl;
                return 1;
            }
    if (size <= 0) {
            cout << "Ошибка. Размер массива должен быть больше нуля." << endl;
            return 1;
        }
    

    for ( int i =0; i<size; i++){
        cout << "Введите число: ";
        if (cin.fail()) {
            cout << "Ошибка. Введите число." << endl;
            return 1;
        }
        cin >> m[i];
    }

    cout << "Введите число k: ";
    cin >> k;
    if (cin.fail()) {
            cout << "Ошибка. Введите число." << endl;
            return 1;
        }

    int chet = 0;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (m[i] + m[j] == k and i != j){
                chet+= 1;
                cout << m[i] << " (индекс " << i << ") + " << m[j] << " (индекс " << j << ") = " << k << endl;
            }
        }
    }
    if (chet == 0){
        cout << "Нет чисел, сумма которых равна " << k << endl;
        return 0;
    }

}
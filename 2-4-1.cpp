#include <iostream>
#include <vector>
#include <unordered_map>
#include <random>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru-RU.UTF-8");

    const int N = 1000000; 
    int k;

    cout << "Введите целевое число k: ";
    cin >> k;


    if (cin.fail() || k <= 0) {
        cout << "Ошибка ввода. Введите положительное число." << endl;
        return 1;
    }
    if (k <= 0) {
        cout << "Ошибка. Число k должно быть больше нуля." << endl;
        return 1;
    }

    mt19937 gen(random_device{}());
    vector<int> arr(N);
    
    generate(arr.begin(), arr.end(),
             [&]() { return uniform_int_distribution<>(1, 1000)(gen); });


    unordered_map<int, int> seen;

    for (int i = 0; i < N; ++i) {
        int need = k - arr[i];

        if (seen.count(need) > 0) { 
            int index1 = seen[need]; 
            int index2 = i;        
            
            cout << "Индексы: " << index1 << " и " << index2 << endl;
            cout << "Значения: " << need << " + " << arr[i] << " = " << k << endl;
            
            return 0;


        seen[arr[i]] = i;
    }

    cout << "Пары нет. Нет двух чисел, дающих в сумме " << k << endl;

    return 0;
    }
}   
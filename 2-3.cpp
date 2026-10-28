#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int x[] = {-1, 1, 0, 0, -1, -1, 1, 1};
    int y[] = {0, 0, -1, 1, -1, 1, -1, 1};

    int mass[10][10] = {
    { 5, 12,  3, 14,  8,  1, 10,  7,  2, 15},
    { 9,  0, 11,  6, 13,  4, 15,  2,  8,  5},
    {14,  7,  2, 10,  1,  9,  3, 12,  6, 11},
    { 3, 15,  8,  4, 11,  0, 13,  5,  9,  1},
    {10,  6, 13,  1,  7, 12,  2, 14,  4,  8},
    { 1, 11,  5, 15,  3,  8, 10,  0, 12,  6},
    {12,  4,  9,  2, 14,  6,  1, 13,  7,  3},
    { 7, 13, 14,  8,  5, 11,  4,  9, 15,  2},
    { 8,  2, 10,  0, 12,  3, 14,  6,  1, 13},
    {11,  5,  6,  9,  4, 15,  8,  1, 10,  0}
    };

    cout << "---------------------------------------" << endl;
    for (int i =0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << setw(3) << mass[i][j] << " ";
        }
        cout << endl;
    }
    cout << "---------------------------------------" << endl;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++){
            bool min = true;
            int chislo = mass[i][j];
            
            if( i> 0 and mass[i-1][j]<= chislo){
                min = false;
            }
            if ( i < 9 and mass[i+1][j]<= chislo){
                min = false;
            }
            if ( j > 0 and mass[i][j-1]<= chislo){
                min = false;
            }
            if (j<9 and mass[i][j+1]<= chislo){
                min = false;
            }
            if (i > 0 and j > 0 and mass[i-1][j-1]<= chislo){
                min = false;
            }
            if (i > 0 and j < 9 and mass[i-1][j+1]<= chislo){
                min = false;
            }
            if (i < 9 and j > 0 and mass[i+1][j-1]<= chislo){
                min = false;
            }
            if (i < 9 and j < 9 and mass[i+1][j+1]<= chislo){
                min = false;
            }
            if (min == true){
                cout << "Элемент " << chislo << " является локальным минимумом и находится в ячейке [" << i << "][" << j << "]" << endl;
            }
        } 
    }

    return 0;
}
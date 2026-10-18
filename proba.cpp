#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);          
    SetConsoleOutputCP(1251);
    srand(GetTickCount());        

    const int N = 10;
    int a[N];
    for (int i = 0; i < N; i++) {
        a[i] = rand() % 201 - 100;
        cout << a[i] << " ";
    }
    cout << endl;
    int minValue = a[0];
    int maxValue = a[0];
    for (int i = 1; i < N; i++) {
        if (a[i] < minValue) minValue = a[i];
        if (a[i] > maxValue) maxValue = a[i];
    }
    cout << "Минимум: " << minValue << endl;
    cout << "Максимум: " << maxValue << endl;

    return 0;
}
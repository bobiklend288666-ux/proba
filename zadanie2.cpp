#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(GetTickCount());

    const int N = 10;
    int a[N];
    int from, to, limit;

    cout << "Диапазон случайных чисел (от и до): ";
    cin >> from >> to;
    cout << "Сумма элементов, меньших: ";
    cin >> limit;

    int sum = 0;
    for (int i = 0; i < N; i++) {
        a[i] = rand() % (to - from + 1) + from;
        cout << a[i] << " ";
        if (a[i] < limit) {
            sum = sum + a[i];
        }
    }
    cout << endl;

    cout << "Сумма: " << sum << endl;

    return 0;
}
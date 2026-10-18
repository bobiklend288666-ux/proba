#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double profit[12];
    for (int i = 0; i < 12; i++) {
        cout << "Прибыль за месяц " << i + 1 << ": ";
        cin >> profit[i];
    }

    int start, end;
    cout << "Диапазон месяцев (например, 3 6): ";
    cin >> start >> end;
    int maxMonth = start;
    int minMonth = start;
    for (int m = start; m <= end; m++) {
        if (profit[m - 1] > profit[maxMonth - 1]) maxMonth = m;
        if (profit[m - 1] < profit[minMonth - 1]) minMonth = m;
    }

    cout << "Максимальная прибыль в месяце: " << maxMonth << endl;
    cout << "Минимальная прибыль в месяце: " << minMonth << endl;

    return 0;
}
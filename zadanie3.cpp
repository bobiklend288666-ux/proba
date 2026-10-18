#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double profit[12];

    // вводим прибыль за 12 месяцев
    for (int i = 0; i < 12; i++) {
        cout << "Прибыль за месяц " << i + 1 << ": ";
        cin >> profit[i];
    }

    int start, end;
    cout << "Диапазон месяцев (например, 3 6): ";
    cin >> start >> end;

    // ищем месяцы с максимальной и минимальной прибылью в диапазоне
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

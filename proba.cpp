#include <windows.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double planes[2][3] = {
        { 300, 0, 2000 },
        { 1000, 100, 3000 }
    };
    double fuelConsumption[2][3] = {
        { 1, 4, 7 },
        { 2, 4, 6 }
    };

    double weight, distanceAB, distanceBC;
    int planeNumber;

    cout << "Выберите самолет (1 или 2): ";
    cin >> planeNumber;

    if (planeNumber < 1 || planeNumber > 2) {
        cout << "Неверный номер самолета!" << endl;
        return 0;
    }

    cout << "Введите вес груза (кг): ";
    cin >> weight;

    cout << "Введите расстояние A-B (км): ";
    cin >> distanceAB;

    cout << "Введите расстояние B-C (км): ";
    cin >> distanceBC;

    if (weight < 0 || distanceAB < 0 || distanceBC < 0) {
        cout << "Ошибка: значения не могут быть отрицательными!" << endl;
        return 0;
    }

    int plane = planeNumber - 1;
    if (weight > planes[plane][2]) {
        cout << "Самолет не может поднять такой груз!" << endl;
        return 0;
    }
    int weightRange;

    if (weight <= 750) {
        weightRange = 0;
    }
    else if (weight <= 1500) {
        weightRange = 1;
    }
    else {
        weightRange = 2;
    }

    double consumption = fuelConsumption[plane][weightRange];

    double mainTank = planes[plane][0];
    double additionalTank = planes[plane][1];
    double fuelAB = distanceAB * consumption;

    if (fuelAB > mainTank + additionalTank) {
        cout << "Невозможно долететь из A в B!" << endl;
        return 0;
    }
    double remainingAdditional = additionalTank;
    double remainingMain = mainTank;

    if (fuelAB <= remainingAdditional) {
        remainingAdditional -= fuelAB;
    }
    else {
        fuelAB -= remainingAdditional;
        remainingAdditional = 0;
        remainingMain -= fuelAB;
    }
    double fuelBC = distanceBC * consumption;

    if (fuelBC > mainTank) {
        cout << "Невозможно долететь из B в C!" << endl;
        return 0;
    }
    double refueling = fuelBC - remainingMain;

    if (refueling < 0) {
        refueling = 0;
    }

    if (remainingMain + refueling > mainTank) {
        cout << "Невозможно долететь из B в C!" << endl;
        return 0;
    }

    cout << fixed << setprecision(2);
    cout << "Минимальная дозаправка в точке B: "
        << refueling << " литров" << endl;

    return 0;
}
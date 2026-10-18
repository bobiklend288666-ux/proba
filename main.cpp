#include <iostream>
#include <Windows.h>
const double applePrice = 100.99, orangePrice = 120.99, adricosPrice = 130.99, pearPrice = 140.99;
const double tomatPrice = 150.99, lykoviPrice = 280.99, cucumberPrice = 250.99;
const double garlicPrice = 350.99, parsleyPrice = 310.99;
const double boyarPrice = 499.99;
int litapple = 0, litorange = 0, litabricos = 0, litpear = 0, littomat = 0, litlykovi = 0, litcucumber = 0, litgarlic = 0, litparsley = 0, litboyar = 0;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int choose = 1;
	int product = -1;
	int liters = 0;

	while (true)
	{
		system("cls");
		std::cout << "---Соки Александра---";
		std::cout << "\n---Выбор раздела---";
		std::cout << "\n1) Фруктовый.\n";
		std::cout << "\n2) Овощной.\n";
		std::cout << "\n3) Чаи.\n";
		std::cout << "\n4) Боярышник.\n";
		std::cout << "Ввод: ";
		std::cin >> choose;

		if (choose == 1)
		{
			system("cls");
			std::cout << "\n---Ассортимент Фруктового раздела---\n";
			std::cout << "\n1) Яблочный.(" << applePrice << "руб/л) (В корзине: " << litapple << "л)\n";
			std::cout << "\n2) Апельсиновый.(" << orangePrice << "руб/л) (В корзине: " << litorange << "л)\n";
			std::cout << "\n3) Абрикосовый.(" << adricosPrice << "руб/л) (В корзине: " << litabricos << "л)\n";
			std::cout << "\n4) Грушевый.(" << pearPrice << "руб/л) (В корзине: " << litpear << "л)\n";

			std::cout << "\n0) Выход.\n";
			std::cout << "Ввод: ";
			std::cin >> product;
			if (product == 0)
			{
				break;
			}
			else if (1 <= product <= 4)
			{
				std::cout << "Введите количество желаемых литров: ";
				std::cin >> liters;
				if (liters > 0)
				{
					if (choose == 1)
					{
						litapple += liters;
					}
					if (choose == 2)
					{
						litorange += liters;
					}
					if (choose == 3)
					{
						litabricos += liters;
					}
					if (choose == 4)
					{
						litpear += liters;
					}

				}
			}
		}


		else if (choose == 2)
		{

		}


		else if (choose == 3)
		{

		}


		else if (choose == 4)
		{

		}


		else if (choose == 0)
		{
			break;
		}


		else
		{
			std::cout << "Неверный выбор.";
		}
	}










	return 0;
}
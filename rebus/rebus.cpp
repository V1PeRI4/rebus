#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a[6]; //массив из 7 элементов с запасом
	int prop, prop_o, rcia;
	int i, j, r;
	cout << "Вычисление ребуса: " << endl << "ПРОП * О = РЦИЯ\n";
	for (a[0] = 0; a[0] <= 9; a[0]++)//перебор чисел для поиска подходящих
		for (a[1] = 0; a[1] <= 9; a[1]++)
			for (a[2] = 0; a[2] <= 9; a[2]++)
				for (a[3] = 0; a[3] <= 9; a[3]++)
					for (a[4] = 0; a[4] <= 9; a[4]++)
						for (a[5] = 0; a[5] <= 9; a[5]++)
						{
							prop = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[0]; //помещение отдельных букв в массив из натуральных чисел и домножение на нужный разряд
							prop_o = a[2];
							rcia = a[1] * 1000 + a[3] * 100 + a[4] * 10 + a[5];
							if (prop * prop_o == rcia)
							{
								r = 0;
								for (i = 0; i < 6; i++)

									for (j = i + 1; j < 6; j++)//циклы и условие для сравнения цифр

										if (a[i] == a[j]) r++;

								if (r == 0) //условие для отсеивания повторящихся символов

								{

									cout << prop << " * " << prop_o << " = " << rcia << endl;

									cout << "П = " << a[0] << endl

										<< "Р = " << a[1] << endl

										<< "О = " << a[2] << endl

										<< "Ц = " << a[3] << endl

										<< "И = " << a[4] << endl

										<< "Я = " << a[5] << endl;

								}

							}

						}

	cout << "\nВычисление завершено\n"; 

	cout << endl;

	system("pause");

	return 0;

}

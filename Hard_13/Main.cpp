#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	cout << "¬ведите N что бы получить все натуральные числа в диапазоне [0, N]" << endl;
	int N;
	cin >> N;

	int* arr = new int[N + 1];

	for (int i = 0; i <= N; i++)                  // заполн€ем массив цифрами от 0 до N (включительно)
	{
		arr[i] = i;
	}

	int k = 0;
	for (int i = 0; i <= N; i++)
	{
		if (arr[i] != 0 && arr[i] != 1)
		{
			cout << setw(4) << arr[i];            // выводим натуральное число
			
			for (int j = i * i; j <= N; j = j + i)   // само "решето"
			{
				arr[j] = 0;
			}
												  
		}
	}
	cout << endl;

	system("pause");
	return 0;
}
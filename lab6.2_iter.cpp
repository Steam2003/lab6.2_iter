#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;
void iter(int* mas, int Low, int Max, int N)
{
	for (int i = 0; i <= N - 1; ++i)
	{
		mas[i] = Low + rand() % (Max - Low + 1);
		cout << setw(3) << mas[i] << " ";
	}
	int min = mas[0];
	int max = mas[0];
	for (int i = 0; i <= N-1; ++i)
	{
		if (mas[i] < min)
			min = mas[i];
		if (mas[i] > max)
			max = mas[i];
	}
	cout << endl;
	cout << "—ума максимального та м≥н≥мального числа масиву: " << min + max << endl;
}
int unittest(int c[])
{
	int i = 0;
	int N = 10;
	int min = c[i];
	int max = c[i];
	for (i = 0; i <= N - 1; ++i)
	{
		if (c[i] < min)
			min = c[i];
		if (c[i] > max)
			max = c[i];
	}
	cout << "Unit test result: " << min + max << endl;
	return min + max;
}
int main()
{
	int N, Low, Max;
	srand((unsigned)time(NULL));
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "¬вед≥ть к≥льк≥сть елемент≥в масиву: "; cin >> N;
	cout << "¬вед≥ть м≥н≥мальне значенн€ масиву: "; cin >> Low;
	cout << "¬вед≥ть максимальне значенн€ масиву: "; cin >> Max;
	cout << endl;
	int* mas = new int[N];
	cout << "≤терац≥йний" << endl;
	iter(mas, Low, Max, N);
	delete[] mas;
	int c[10] = { -10,5,9,2,7,-23,33,4,17,-15 };
	unittest(c);
}
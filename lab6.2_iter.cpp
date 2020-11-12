#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

void create(int* mas, int Low, int Max, int N);
void print(int* mas, int N);
int MinE(int* mas, int N);
int MaxE(int* mas, int N);

int main()
{
	int N, Low, Max;
	srand((unsigned)time(NULL));
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "������ ������� �������� ������: "; cin >> N;
	cout << "������ �������� �������� ������: "; cin >> Low;
	cout << "������ ����������� �������� ������: "; cin >> Max;
	cout << endl;
	int* mas = new int[N];
	cout << "�����������" << endl;
	create(mas, Low, Max, N);
	print(mas, N);
	cout << endl;
	int min= MinE(mas, N);
	int max =MaxE(mas, N);
	cout << "̳�������: " << min << endl;
	cout << "�����������: " << max << endl;
	cout << "���� ������������� �� ����������: " << min + max << endl;
	delete[] mas;
	cin.get();
}
void create(int* mas, int Low, int Max, int N)
{
	for (int i = 0; i <= N - 1; ++i)
		mas[i] = Low + rand() % (Max - Low + 1);
}
void print(int* mas, int N)
{
	for (int i = 0; i <= N - 1; ++i)
		cout << setw(3) << mas[i] << " ";
}
int MinE(int* mas, int N)
{
	int min = mas[0];
	for (int i = 0; i <= N - 1; ++i)
		if (mas[i] < min)
			min = mas[i];
	return min;
}
int MaxE(int* mas, int N)
{
	int max = mas[0];
	for (int i = 0; i <= N - 1; ++i)
		if (mas[i] > max)
			max = mas[i];
	return max;
}

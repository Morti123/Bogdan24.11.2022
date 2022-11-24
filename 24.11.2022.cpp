#include <iostream>
#include <ctime>
using namespace std;
int Quarter(double x, double y) {
	if (x >=0 && y >= 0) return 1;
	if (x > 0 && y < 0) return 4;
	if (x < 0 && y>0) return 2;
	if (x <= 0 && y <= 0) return 3;
}
bool Even(int k) {
	return k % 2 == 0;
}
bool IsSquare(int k) {
	return k * k;
}
int main() {
	setlocale(LC_ALL, "Russian");
	/*Proc23.Описать функцию Quarter(x, y) целого типа, определяющую номер
		координатной четверти, в которой находится точка с ненулевыми вещественными координатами(x, y).С помощью этой функции найти номера
		координатных четвертей для трех точек с данными ненулевыми координатами.*/
	/*srand((unsigned int)time(nullptr));
	for (int i = 1; i <= 3; i++) {
		double x = (rand() - 16383) / 1000.0;
		double y = (rand() - 16383) / 1000.0;
		cout << x << " " << y << " " << Quarter(x, y) << endl;
	}*/
	/*Proc24.Описать функцию Even(K) логического типа, возвращающую TRUE,
		если целый параметр K является четным, и FALSE в противном случае.С
		ее помощью найти количество четных чисел в наборе из 10 целых чисел.*/
	/*int sum = 0;
	srand((unsigned int)time(nullptr));
	for (int i = 1; i <= 10; i++) {
		int x = rand();
		if (x % 2 == 0) {
			sum += 1;
		}
		cout << x << " " << Even(x) << endl;
	}
	cout << sum;*/
	/*Proc25◦
		.Описать функцию IsSquare(K) логического типа, возвращающую
		TRUE, если целый параметр K(> 0) является квадратом некоторого целого числа, и FALSE в противном случае.С ее помощью найти количество
		квадратов в наборе из 10 целых положительных чисел.*/
	/*int kol = 0;
	srand((unsigned int)time(nullptr));
	for (int i = 1; i <= 10; i++) {
		int a;
		cin >> a;
		if (sqrt(IsSquare(a)) == a) {
			kol += 1;
		}
		cout << IsSquare(a);
	}
	cout << kol << endl;*/






	return 0;
}


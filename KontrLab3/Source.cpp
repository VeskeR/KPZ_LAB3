#include <iostream>
// LAB 2 var 1
using namespace std;

// Пошук помилок 
// Функция 1
int Add_(int &in1, int &in2, int &in3)
{
	in3 = in1 - in2;
	return in1 + in2;
}

int Mult2(int *in1, int *in2, int *in3)
{
	*in3 = *in1 * (*in2);
	return *in1 + *in2;
}

int main()
{
	// Виконання кожної задачі 1 бал
	/// 1. Робота з referense
	double doubleVar1 = 7.5, doubleVar2 = 8.5;
	double &refdoubleVar1 = doubleVar1;
	double &refdoubleVar2 = doubleVar2;
	double &refdoubleVar3 = doubleVar2;
	// 1.1 Показати результати, що будуть виведені на консоль
	cout << refdoubleVar3 << "--" << refdoubleVar2 << "--" << refdoubleVar1 << "--" << endl;
	cout << doubleVar2 << "--" << "--" << doubleVar1 << endl;
	cout << "-----------------------------" << endl;
	// 1.2. Показати результати, що будуть виведені на консоль
	doubleVar2 = 7.7;
	cout << refdoubleVar3 << "--" << refdoubleVar2 << "-- " << refdoubleVar1 << "-- " << endl;
	cout << doubleVar2 << "-- " << "-- " << doubleVar1 << endl;
	cout << "-----------------------------" << endl;

	/// 2. Робота з покажчиком 
	double *ptrdouble1 = new double;
	double *ptrdouble2 = &doubleVar1;
	double *ptrdouble3 = &doubleVar2;
	ptrdouble1 = ptrdouble3;
	doubleVar1 = 12.0;
	// 2.1 Показати результати, що будуть виведені на консоль
	// Адресу показувати умовним числом з основою 16. Наприклад 0хffaaffaa
	cout << *ptrdouble1 << "-- " << *ptrdouble2 << "-- " << *ptrdouble3 << "-- " << endl;
	cout << doubleVar1 << "-- " << doubleVar2 << "-- " << ptrdouble3 << "-- " << endl;
	ptrdouble1 = &doubleVar2;
	ptrdouble2 = &doubleVar2;
	ptrdouble3 = &doubleVar1;
	cout << *ptrdouble1 << "-- " << ptrdouble2 << "-- " << *ptrdouble3 << "-- " << endl;
	cout << &doubleVar2 << "-- " << &doubleVar1 << "-- " << doubleVar1 << "-- " << doubleVar2 << endl;
	cout << "-----------------------------" << endl;
	/// 3. Параметри функции (referense)
	int Int1 = 5;
	int Int2 = 7;
	int Int3 = 10;
	int IntRes = 11;
	cout << Int1 << "-- " << Int2 << "-- " << Int3 << "-- " << IntRes << endl;
	IntRes = Add_(Int1, Int2, Int3); //1
	IntRes = Add_(Int1, Int2, Int3); //2
	IntRes = Add_(Int1, Int2, Int3); //3
	IntRes = Mult2(&Int1, &Int2, &Int3);//4
	cout << Int1 << "-- " << Int2 << "-- " << Int3 << "-- " << IntRes << endl;
	cout << "-----------------------------" << endl;

	/// 4. Параметри функции (pointers)
	Int1 = 3;
	cout << Int1 << "-- " << Int2 << "-- " << Int3 << "-- " << IntRes << endl;
	IntRes = Mult2(&Int1, &Int2, &Int3);//1
	IntRes = Mult2(&Int1, &Int2, &Int3);//2
	IntRes = Mult2(&Int1, &Int2, &Int3);//3
	IntRes = Mult2(&Int1, &Int2, &Int3);//4
	cout << Int1 << "-- " << Int2 << "-- " << Int3 << "-- " << IntRes << endl;

	/// 5. Показати номера функцій де є помилки під час її виклику. 
	cin >> IntRes;
	return 0;
}

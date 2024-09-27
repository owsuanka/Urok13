#include <iostream>
#include <string>
#include <windows.h> 
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//задание 1
	int x, y, z;
	int a, b;
	string triangle;
	string quadrangle;
	cout << "Введите первый угол треугольника: " << endl; cin >> x;
	cout << "Введите второй угол треугольника: " << endl; cin >> y;
	cout << "Введите третий угол треугольника: " << endl; cin >> z;
	triangle = (x + y + z != 180) ? "Такого теугольника не существует\n": (x == 60 && y == 60 && z == 60) ? "Равносторонний\n" : ((x == 90 || y == 90 || z == 90) && (x == y || x == z || y == z)) ? "Равнобедренный прямоугольный\n" : (x == y || x == z || y == z) ? "Равнобедренный\n" : (x == 90 || y == 90 || z == 90) ? "Прямоугольный\n" : "Разносторонний\n" ;
	cout << "Вид треугольника: " << triangle << endl;

	//задание 2
	cout << "Введите первую сторону четырехугольника: " << endl; cin >> a;
	cout << "Введите вторую сторону четырехугольника: " << endl; cin >> b;
	quadrangle = (a == b) ? "Квадрат " : (a != b) ? "Прямоугольник" : "Другая фигура";
	cout << "Вид четырехугольника: " << quadrangle << endl;
}
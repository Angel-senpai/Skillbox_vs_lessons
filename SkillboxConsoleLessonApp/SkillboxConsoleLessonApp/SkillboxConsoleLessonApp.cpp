// SkillboxConsoleLessonApp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Helpers.h"
#include <time.h>
using std::cout;
using std::string;


class Vector {
private:
	double x, y, z;
public:
	Vector() : x(0), y(0), z(0)
	{}
	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{}
	void showValue() {
		cout << "\n" << x << ' ' << y << ' ' << z;
	}
	double v_module() {
		return sqrt(x * x + y * y + z * z);
	}
};


int main()
{   
	Vector v;
	v.showValue();

	Vector vCustom(1, 1, 1);
	vCustom.showValue();
	cout<< "\nVector module: " << vCustom.v_module();
}

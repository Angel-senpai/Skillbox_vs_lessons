// SkillboxConsoleLessonApp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Helpers.h"

using std::cout;
using std::string;

void FindOddNumbers(int Limit, bool IsOdd);


int main()
{   
	FindOddNumbers(15, false);
}


void FindOddNumbers(int Limit, bool IsOdd) {
	for (int i = IsOdd; i <= Limit - 1; i+= 2) {
		cout << i << "\n";
	}
}

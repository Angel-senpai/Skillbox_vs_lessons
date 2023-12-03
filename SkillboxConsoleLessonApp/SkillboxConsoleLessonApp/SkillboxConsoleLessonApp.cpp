// SkillboxConsoleLessonApp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Helpers.h"
#include <time.h>
using std::cout;
using std::string;




int main()
{   
	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);

	const int N = 5;

	int test[N][N];
	int sum = 0;
	int dayIndex = buf.tm_mday % N;
	for (int i = 0; i < N; i++) {

		for (int j = 0; j < N; j++) {
			test[i][j] = i + j;
			cout << test[i][j] << " ";

			if (dayIndex == i) {
				sum += test[i][j];
			}
		}
		cout << "\n";
	}

	cout << "Sum rows with index: " << dayIndex << "\nResult: " << sum << "\n";
}

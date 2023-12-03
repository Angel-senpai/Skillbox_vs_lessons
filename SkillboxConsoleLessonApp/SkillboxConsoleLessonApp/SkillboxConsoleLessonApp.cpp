// SkillboxConsoleLessonApp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>
using std::cout;
using std::cin;
using std::string;

class Player {
private:
	string name;
	int score;
public:
	Player() : name("player"), score(0)
	{}
	Player(string _name, int _score) : name(_name), score(_score)
	{}

	const string& const _name = name;
	const int& const _score = score;

	void setScore(int value) {
		score = value;
	}
	void setName(string value) {
		name = value;
	}

	void showInfo() {
		cout << "\nName: " << name << "\n";
		cout << "Score " << score << "\n";
	}
};


int main()
{
	int players_count;
	cout << "Enter players count: ";
	cin >> players_count;
	Player** players = new Player* [players_count];


	system("CLS");
	for (int i = 0; i < players_count; i++) {
		string name;
		int score;

		cout << "Enter player #"<< i+1 << "\n";
		cout << "Name: ";
		cin >> name;
		cout << "Score: ";
		cin >> score;
		cout << "\n";
		players[i] = new Player(name, score);
		
	}
	system("CLS");

	for (int i = 0; i < players_count; i++) {
		Player* p = players[i];
		for (int j = i - 1; j >= 0 && players[j]->_score > p->_score; j--) {
			players[j + 1] = players[j];
			players[j] = p;
		}
	}

	for (int i = 0; i < players_count; i++) {
		players[i]->showInfo();
	}

	delete[] players;
	players = nullptr;

	return 0;
}

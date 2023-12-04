// SkillboxConsoleLessonApp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>
using std::cout;
using std::cin;
using std::string;

class Animal {
public:
	Animal() {}
	virtual void Voice() {
		cout << "Making noice";
	}
};

class Dog : public Animal {
public:
	Dog(){}
	void Voice() override {
		cout << "Woof";
	}
};

class Cat : public Animal {
public:
	Cat(){}
	void Voice() override {
		cout << "myau!";
	}
};


class Cow : public Animal {
public:
	Cow(){}
	void Voice() override {
		cout << "mu!";
	}
};


int main()
{
	int numberOfAnimals = 10;
	Animal** animals = new Animal*[numberOfAnimals];
	for (int i = 0; i < numberOfAnimals; i++) {
		if (i % 2 == 0) {
			animals[i] = new Dog();
		}
		else if (i % 3 == 0) {
			animals[i] = new Cat();
		}
		else {
			animals[i] = new Cow();
		}
	}

	for (int i = 0; i < numberOfAnimals; i++) {
		animals[i]->Voice();
		cout << "\n";
	}

	delete[] animals;
	animals = nullptr;

	return 0;
}

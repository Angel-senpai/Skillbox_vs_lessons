// SkillboxConsoleLessonApp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Helpers.h"

int main()
{   
    std::string text = "Test message";

    if (text.length() < 1) {
        std::cout << "Can't find characters in string";
        return 0; 
    }
    std::cout << "Current string: " + text + "\n" << "Fist char: " << text[0] << "\nChar count: " << text.length() << "\nLast char: " << text[text.length() - 1];
}

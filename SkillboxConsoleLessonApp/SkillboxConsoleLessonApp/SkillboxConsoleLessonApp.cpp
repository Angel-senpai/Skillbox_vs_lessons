// SkillboxConsoleLessonApp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Helpers.h"

using std::cout;
int main()
{   
    std::string text = "Test message";

    if (text.length() < 1) {
        std::cout << "Can't find characters in string";
        return 0; 
    }
    cout << "Current string: " + text + "\n";
    cout << "First char: " << text[0] << "\nChar count: " << text.length();
    cout << "\nLast char: " << text[text.length() - 1];
}

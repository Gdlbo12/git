#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    char c;                
    int firstDigit = -1;   
    int letterCount = 0;   
    bool isValid = true;   

    cout << "Введите текст, завершите ввод нажатием Enter: ";

    do {
        c = getchar(); // Считываем символ
        if (c == '\n') break; // Выход, если нажат Enter

        if (firstDigit == -1) { 
            if (c >= '1' && c <= '9') {
                firstDigit = c - '0'; // Преобразуем символ цифры в число
            } else {
                cout << "Ошибка: текст должен начинаться с ненулевой цифры." << endl;
                return 0;
            }
        } else { // Обработка символов после первой цифры
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
                letterCount++; 
            } else {
                cout << "Ошибка: после цифры должны быть только буквы." << endl;
                return 0;
            }
        }
    } while (true); 

    // Проверка на соответствие количеству букв
    if (letterCount == firstDigit) {
        cout << "Условие выполнено." << endl;
        cout << "Первая цифра: " << firstDigit << endl;
        cout << "Количество букв: " << letterCount << endl;
    } else {
        cout << "Ошибка: количество букв (" << letterCount
             << ") не соответствует числу, указанному в первой цифре (" << firstDigit << ")." << endl;
    }

    return 0;
    int x; 
    x = 10; 
    cout << x
}

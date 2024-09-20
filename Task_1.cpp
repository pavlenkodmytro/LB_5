#include <iostream>  // Підключаємо бібліотеку для вводу/виводу
#include <cmath>     // Підключаємо бібліотеку для математичних функцій (наприклад, sin, pow)

using namespace std;  // Використовуємо простір імен std, щоб не писати "std::" перед кожною функцією з цієї бібліотеки

int main() {  // Початок основної функції програми
    double x, y;  // Оголошуємо дві змінні типу double: x для вводу значень і y для обчисленого результату
    cout << "Enter five values of x: ";  // Виводимо на екран запит для користувача ввести 5 значень x
    for (int i = 0; i < 5; i++) {  // Цикл, який виконується 5 разів
        cin >> x;  // Читаємо значення x з вводу
        y = pow(sin(x), 5) * x + 5 * x - 1.5;  // Обчислюємо y за формулою: (sin(x)^5) * x + 5 * x - 1.5
        cout << "y = " << y << endl;  // Виводимо значення y на екран
    }
    return 0;  // Завершуємо виконання програми і повертаємо 0 (успішне завершення)
}

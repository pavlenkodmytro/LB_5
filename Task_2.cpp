#include <iostream>  // Підключаємо бібліотеку для вводу/виводу

using namespace std;  // Використовуємо простір імен std

int main() {  // Початок основної функції програми
    int product = 1;  // Оголошуємо змінну product та ініціалізуємо її значенням 1
    for (int i = 2; i <= 20; i += 2) {  // Цикл, який ітерується через парні числа від 2 до 20
        product *= i;  // Множимо product на i (поточне парне число)
    }
    cout << "The product of even numbers from 1 to 20 is: " << product << endl;  // Виводимо результат
    return 0;  // Завершуємо програму
}

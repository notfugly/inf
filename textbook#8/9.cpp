#include <bits/stdc++.h>
using namespace std;

int main() {
    int cap;
    long long a, b;
    char op;

    cout << "Введите разрядность (2-32): ";
    cin >> cap;
    if (!cin || cap < 2 || cap > 32) {
        cout << "Неверная разрядность" << endl;
        return 1;
    }

    long long count = 1LL << cap;
    long long min_value = -count / 2;
    long long max_value = count / 2 - 1;

    cout << "Введите A, операцию (+ или -) и B: ";
    cin >> a >> op >> b;
    if (!cin || (op != '+' && op != '-')) {
        cout << "Ошибка ввода" << endl;
        return 1;
    }

    if (a < min_value || a > max_value || b < min_value || b > max_value) {
        cout << "Числа должны быть от " << min_value << " до " << max_value << endl;
        return 1;
    }

    long long result;
    if (op == '+') {
        result = a + b;
    } else {
        result = a - b;
    }

    long long value = result % count;
    if (value < 0) value += count;

    string code = "";
    for (int i = cap - 1; i >= 0; i--) {
        if ((value >> i) & 1) {
            code += '1';
        } else {
            code += '0';
        }
    }

    long long decoded = value;
    if (code[0] == '1') decoded -= count;

    cout << "Точный результат: " << result << endl;
    cout << "Дополнительный код результата: " << code << endl;
    cout << "Результат в заданной разрядности: " << decoded << endl;

    if (result < min_value || result > max_value) {
        cout << "Переполнение: да" << endl;
    } else {
        cout << "Переполнение: нет" << endl;
    }

    return 0;
}

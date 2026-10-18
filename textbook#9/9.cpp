#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<double> numbers = {
        3.332891019202024, 0.1, 0.2,
        3.6255, 10.5, 100.01, -7.12345
    };

    int fraction_bits = 16; // Задаем масштаб в 16 битов
    int count = numbers.size();

    double scale = pow(2, fraction_bits);
    double sum_fixed = 0;
    double sum_float = 0;

    // Для того, чтобы float и int32_t занимали одинаковое кол-во памяти (неочевидная штука)
    static_assert(sizeof(float) == sizeof(int32_t)); 

    cout << setprecision(15);

    for (int i = 0; i < count; i++) {
        double x = numbers[i];

        // Фиксированная точка
        double rounded = round(x * scale);

        int32_t scaled = static_cast<int32_t>(rounded);
        double fixed_value = scaled / scale;

        // Плавающая точка
        float float_value = static_cast<float>(x);

        // Погрешности
        double error_fixed = abs(x - fixed_value);
        double error_float = abs(x - float_value);

        sum_fixed += error_fixed;
        sum_float += error_float;

        cout << "Исходное число: " << x << endl;
        cout << "Фиксированная точка: " << fixed_value << endl;
        cout << "Плавающая точка: " << float_value << endl;
        cout << "Погрешность фиксированной: " << error_fixed << endl;
        cout << "Погрешность плавающей: " << error_float << endl;
        cout << endl;
    }

    cout << "Средняя погрешность фиксированной: " << sum_fixed / count << endl;

    cout << "Средняя погрешность плавающей: " << sum_float / count << endl;

    if (sum_fixed < sum_float) {
        cout << "Фиксированная точка точнее" << endl;
    }
    else if (sum_float < sum_fixed) {
        cout << "Плавающая точка точнее" << endl;
        }
    else {
        cout << "Погрешности одинаковы" << endl;
    }

    // У фиксированной точки мы выделили 16 бит на дробную часть, поэтому шаг всегда равен 2^-16
    // У плавающей точки есть 24 значащих двоичных разряда
    // Порядок позволяет менять масштаб, он зависит от величины числа
}
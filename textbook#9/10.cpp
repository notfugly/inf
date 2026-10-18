#include <bits/stdc++.h>
using namespace std;

int main() {
    // Сложим число 0.1 10000 раз, посчитаем погрешность суммы в разных представлениях

    double x = 0.1;
    int count = 10000;
    int fraction_bits = 16;

    double scale = pow(2, fraction_bits);

    // Кодируем слагаемое и создаём суммы
    int32_t fixed_step = round(x * scale);
    int32_t fixed_sum = 0;

    float float_step = x;
    float float_sum = 0;

    static_assert(sizeof(float) == sizeof(int32_t));

    cout << setprecision(15);

    for (int i = 1; i <= count; i++) {
        fixed_sum += fixed_step;
        float_sum += float_step;

    }

    double expected = x * count;
    double error_fixed = abs(expected - fixed_sum / scale);
    double error_float = abs(expected - float_sum);

    cout << "Ожидаемый результат: " << expected << endl;
    cout << "Фиксированная точка: " << fixed_sum / scale << endl;
    cout << "Плавающая точка: " << float_sum << endl;
    cout << "Погрешность фиксированной: " << error_fixed << endl;
    cout << "Погрешность плавающей: " << error_float << endl;

    if (error_fixed < error_float) {
        cout << "Фиксированная точка точнее" << endl;
    } else if (error_float < error_fixed) {
        cout << "Плавающая точка точнее" << endl;
    } else {
        cout << "Погрешности одинаковы" << endl;
    }
}

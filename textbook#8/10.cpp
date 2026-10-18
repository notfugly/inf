#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int n = 10; n <= 1000000; n *= 10) {
        float sum_float = 0;
        double sum_double = 0;

        for (int i = 0; i < n; i++) {
            sum_float += 0.1f;
            sum_double += 0.1;
        }

        double exact = n / 10;
        double error_float = abs(double(sum_float) - exact);
        double error_double = abs(sum_double - exact);

        cout << defaultfloat << setprecision(17);
        cout << "Количество сложений: " << n << endl;
        cout << "Точный результат: " << exact << endl;
        cout << "Сумма float: " << sum_float << endl;
        cout << "Сумма double: " << sum_double << endl;

        cout << scientific << setprecision(10);
        cout << "Абсолютная ошибка float: " << error_float << endl;
        cout << "Абсолютная ошибка double: " << error_double << endl;
        cout << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> bits = {4, 8, 16};
    vector<long long> numbers = {-32769, -129, -9, -1, 0, 7, 8, 128, 32768};

    for (auto n : bits) {
        long long count = 1LL << n;
        long long min_value = -count / 2;
        long long max_value = count / 2 - 1;

        cout << "Разрядность: " << n << endl;
        cout << "Диапазон: от " << min_value << " до " << max_value << endl;

        for (auto x : numbers) {
            long long value = x % count;
            if (value < 0) value += count;

            string code = "";
            for (int i = n - 1; i >= 0; i--) {
                if ((value >> i) & 1) {
                    code += '1';
                } else {
                    code += '0';
                }
            }

            long long decoded = value;
            if (code[0] == '1') decoded -= count;

            cout << "Число: " << x << endl;
            cout << "Двоичный код: " << code << endl;
            cout << "Число по этому коду: " << decoded << endl;

            if (x < min_value || x > max_value) {
                cout << "Переполнение: число выходит за диапазон" << endl;
            } else {
                cout << "Число представлено корректно" << endl;
            }
            cout << endl;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "10111";
    string coded_s = "";
    for (auto x : s) {
        for (int i = 0; i < 3; i++) coded_s += x;
    }

    // Моделирование ошибки
    coded_s[1] = '0';

    string restored_string = "";
    for (auto i = 0; i < coded_s.size(); i += 3) {
        int b1, b2, b3;
        b1 = coded_s[i] - '0';
        b2 = coded_s[i + 1] - '0';
        b3 = coded_s[i + 2] - '0';
        int ones = b1 + b2 + b3;
        if (ones >= 2) {
            restored_string += "1";
        } else {
            restored_string += "0";
        }
    }

    cout << "Исходная строка: " << s << endl;
    cout << "Закодированная строка с ошибкой: " << coded_s << endl;
    cout << "Восстановленная строка: " << restored_string << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "100001";
    string code_s = "1100000";

    string base = code_s.substr(0, code_s.size() - 1);
    char parity_bit = code_s[code_s.size() - 1];
    cout << "Проверяемое сообщение: " << base << endl;
    cout << "Бит четности: " << parity_bit << endl;

    int ones = 0;
    for (auto x : base) {
        if (x == '1') ones++;
    }
    if (ones % 2 == parity_bit - '0') {
        cout << "Проверка пройдена" << endl;
    } else {
        cout << "Найдена ошибка" << endl;
    }

    // Ошибка не обнаружена, т.к. было изменено четное число бит

    return 0;
}
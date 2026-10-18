#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "10111";
    string coded_s = "";
    for (auto x : s) {
        for (int i = 0; i < 3; i++) coded_s += x;
    }
    cout << "Исходная строка: " << s << endl;
    cout << "Закодированная строка: " << coded_s << endl;
    cout << "Объем закодированной строки: " << sizeof(coded_s);

    return 0;
}
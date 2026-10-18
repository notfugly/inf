#include <bits/stdc++.h>
using namespace std;

//       4 5 6 7
//   2 3     6 7
// 1   3   5   7
// 1 2 3 4 5 6 7

string hamm_form(string s) {
    int p3, p5, p6, p7;
    p3 = s[0] - '0';
    p5 = s[1] - '0';
    p6 = s[2] - '0';
    p7 = s[3] - '0';

    int d1, d2, d4;
    d1 = p3 ^ p5 ^ p7;
    d2 = p3 ^ p6 ^ p7;
    d4 = p5 ^ p6 ^ p7;

    string res = "";
    for (auto x : {d1, d2, p3, d4, p5, p6, p7}) res += to_string(x);
    return res;
}

int hamm_syndrom(string s) {
    vector<int> b(s.begin(), s.end());
    for (auto &x : b) x -= '0';
    
    int c1, c2, c4;
    c1 = b[0] ^ b[2] ^ b[4] ^ b[6];
    c2 = b[1] ^ b[2] ^ b[5] ^ b[6];
    c4 = b[3] ^ b[4] ^ b[5] ^ b[6];

    return c1 + c2 * 2 + c4 * 4;
}

string hamm_correct(string s) {
    int idx = hamm_syndrom(s);
    if (idx == 0) return s;
    s[idx - 1] ^= 1;
    return s;

}

int main() {
    string s = "1011";
    cout << "Исходная строка: " << s << endl;
    string s_new = hamm_form(s);
    cout << "Строка Хемминга: " << s_new << endl;

    // Моделирование ошибки
    s_new[2] = (s_new[2] == '1') ? '0' : '1';
    cout << "Строка Хемминга с одной ошибкой: " << s_new << endl;

    cout << "Синдром: " << hamm_syndrom(s_new) << endl;
    cout << "Корректная строка Хэмминга: " << hamm_correct(s_new) << endl;
}
#include <bits/stdc++.h>
using namespace std;

string trans(int ns, string n, int nsto) {
    for (char c : n) {
        int digit;

        if (c >= '0' && c <= '9') {
            digit = c - '0';
        } else if (c >= 'A' && c <= 'Z') {
            digit = c - 'A' + 10;
        } else if (c >= 'a' && c <= 'z') {
            digit = c - 'a' + 10;
        } else {
            return "Invalid number";
        }

        if (digit >= ns) {
            return "Invalid number";
        }
    }

    long long nn = 0;

    for (char c : n) {
        int digit;

        if (c >= '0' && c <= '9') {
            digit = c - '0';
        } else if (c >= 'A' && c <= 'Z') {
            digit = c - 'A' + 10;
        } else {
            digit = c - 'a' + 10;
        }

        nn = nn * ns + digit;
    }

    if (nsto == 10) {
        return to_string(nn);
    }

    if (nn == 0) {
        return "0";
    }

    string res;

    while (nn > 0) {
        int digit = nn % nsto;
        nn /= nsto;

        if (digit < 10) {
            res += char('0' + digit);
        } else {
            res += char('A' + digit - 10);
        }
    }

    reverse(res.begin(), res.end());

    return res;
}

int main() {
    cout << "Введите исходную систему счисления: ";

    int ns;
    cin >> ns;

    while (ns <= 1 || ns >= 37) {
        cout << "Invalid NS" << endl;
        cout << "Введите исходную систему счисления: ";
        cin >> ns;
    }

    cout << "Введите число: ";

    string n;
    cin >> n;

    cout << "Введите систему счисления, в которую хотите перевести число: ";

    int nsto;
    cin >> nsto;

    while (nsto <= 1 || nsto >= 37) {
        cout << "Invalid NS" << endl;
        cout << "Введите систему счисления, в которую хотите перевести число: ";
        cin >> nsto;
    }

    string res = trans(ns, n, nsto);

    if (res == "Invalid number") {
        cout << "Invalid number" << endl;
        return 0;
    }

    cout << "Результат: " << res << endl;

    string back = trans(nsto, res, ns);

    cout << "Обратный перевод: " << back << endl;

    if (back == n) {
        cout << "Проверка пройдена" << endl;
    } else {
        cout << "Ошибка перевода" << endl;
    }

    cout << endl;
    cout << "Длина записи числа в разных системах:" << endl;

    for (int i = 2; i <= 36; i++) {
        string current = trans(ns, n, i);

        cout << "Система " << i << ": "
             << current << " ("
             << current.size() << " символов)" << endl;
    }

    return 0;
}

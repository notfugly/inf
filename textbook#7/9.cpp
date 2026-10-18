#include <bits/stdc++.h>
using namespace std;


string direct(long long n, int cap) {
    string result(cap, '0');
    result[0] = (n < 0) ? '1' : '0';

    long long magnitude = (n < 0) ? -n : n;

    for (int i = cap - 1; i >= 1; --i) {
        result[i] = char('0' + magnitude % 2);
        magnitude /= 2;
    }

    return result;
}

string inverse(long long n, int cap) {
    string result = direct(n, cap);

    if (n < 0) {
        for (int i = 1; i < cap; ++i) {
            result[i] = (result[i] == '0') ? '1' : '0';
        }
    }

    return result;
}

string extra(long long n, int cap) {
    string result = inverse(n, cap);

    if (n < 0) {
        for (int i = cap - 1; i >= 0; --i) {
            if (result[i] == '0') {
                result[i] = '1';
                break;
            }
            result[i] = '0';
        }
    }

    return result;
}

long long tobin(const string& code, int start = 0) {
    long long value = 0;

    for (int i = start; i < static_cast<int>(code.size()); ++i) {
        value = value * 2 + (code[i] - '0');
    }

    return value;
}

long long rdirect(const string& code) {
    long long magnitude = tobin(code, 1);
    return (code[0] == '1') ? -magnitude : magnitude;
}

long long rinverse(const string& code) {
    string result = code;

    if (result[0] == '0') {
        return tobin(result, 1);
    }

    for (int i = 1; i < static_cast<int>(result.size()); ++i) {
        result[i] = (result[i] == '0') ? '1' : '0';
    }

    return -tobin(result, 1);
}

long long rextra(const string& code) {
    long long value = tobin(code);

    if (code[0] == '1') {
        value -= (1LL << code.size());
    }

    return value;
}

string check(const string& code, long long n,
             long long (*restore)(const string&)) {
    long long restored = restore(code);

    return " -> " + to_string(restored) +
           (restored == n ? " [OK]\n" : " [ОШИБКА]\n");
}

int main() {
    long long n;
    int cap;

    cout << "Введите целое число: ";
    cin >> n;
   

    cout << "Введите разрядность (2–32): ";
    cin >> cap;
    if (cap < 2 || cap > 32) {
        return 1;
    }

    long long limit = (1LL << (cap - 1)) - 1;

    string d = direct(n, cap);
    string r = inverse(n, cap);
    string e = extra(n, cap);

    cout << "Прямой код " << d << check(d, n, rdirect);
    cout << "Обратный код " << r << check(r, n, rinverse);
    cout << "Дополнительный код " << e << check(e, n, rextra);
    

    return 0;
}
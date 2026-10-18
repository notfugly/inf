#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    int base;

    cin >> n >> base;

    if (base < 2 || base > 36) {
        cout << "Invalid" << endl;
        return 0;
    }

    string res;

    if (n == 0) {
        res = "0";
    } else {
        long long power = 1;
        while (power <= n / base) {
            power *= base;
        }

        while (power > 0) {
            int digit = n / power;
            n %= power;

            if (digit < 10) {
                res += char('0' + digit);
            } else {
                res += char('A' + digit - 10);
            }

            power /= base;
        }
    }

    cout << "Результат в системе счисления с осн. " << base << ": " << res << endl;

    return 0;
}
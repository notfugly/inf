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
        while (n > 0) {
            int digit = n % base;
            n /= base;

            if (digit < 10) {
                res += char('0' + digit);
            } else {
                res += char('A' + digit - 10);
            }
        }

        reverse(res.begin(), res.end());
    }

    cout << "Результат в системе счисления с осн. " << base << ": " << res << endl;

    return 0;
}
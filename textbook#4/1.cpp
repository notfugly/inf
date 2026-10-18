#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ns;
    cin >> ns;
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
        return tolower(c);
    });
    
    long long res = 0;

    for (int i = 0; i < s.size(); i++) {
        char x = s[i];
        int int_x = x - '0';
        if (!((0 <= int_x && int_x <= 9) || (49 <= int_x && int_x <= 74))) {
            cout << "Incorrect number" << endl;
            return 0;
        }
        if (49 <= int_x && int_x <= 74) {
            int_x -= 39;
        }
        cout << int_x << endl;
        res += pow(ns, s.size() - i - 1) * int_x;
    }
    cout << "Результат в дес. системе счисления: " << res << endl;

    return 0;
}
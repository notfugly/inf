#include <bits/stdc++.h>
using namespace std;
int main() {
    string s = "101011";
    int ones = 0;
    for (auto x : s) {
        if (x == '1') ones++;
    }
    ones %= 2;
    string code_s = s + to_string(ones);
    cout << "Изначальное слово: " << s << endl;
    cout << "Закодированное слово: " << code_s << endl;

    return 0;
}
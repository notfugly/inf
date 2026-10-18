#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    bool found = false;

    for (long long i = 10000; i < 100000; i++) {
        if (i % a == b && i % c == d) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << -1;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    for (long long i = 0; i + 1 < n.size(); i++) {
        if (n[i] == n[i + 1]) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}
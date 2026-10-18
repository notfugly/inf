#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (auto &x : a) {
        cin >> x.second >> x.first;
    }
    sort(a.begin(), a.end(), [](auto a, auto b) {
        if (a.first != b.first)
            return a.first > b.first;

        return a.second < b.second;
    });
    for (auto x : a) {
        cout << x.second << " " << x.first << endl;
    }


    return 0;
}
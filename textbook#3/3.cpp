#include <bits/stdc++.h>
using namespace std;

int main() {
    string fm = "10010010";
    string sm = "11010110";

    int hamm_dist = 0;
    for (int i = 0; i < fm.size(); i++) {
        if (fm[i] != sm[i]) hamm_dist++;
    }
    cout << "Расстояние хеммингтона: " << hamm_dist << endl;

    return 0;
}
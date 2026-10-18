#include <bits/stdc++.h>
using namespace std;

// Сравнение булевых кубов
bool check(vector<bool> f1, vector<bool> f2) {
    if (f1.size() == f2.size()) {
        for (int i = 0; i < f1.size(); i++) {
            if (f1[i] != f2[i]) return false;
        }
    }
    return true;
}

// Генерация бинарного куба
void gener(int size) {
    vector<string> vars(static_cast<int>(pow(2, size)));
    for (int i = 0; i < static_cast<int> (pow(2, size)); i++) {
        vars.push_back(format)
    }
    
} 

// Коммутативность
pair<vector<bool>, vector<bool>> commut(int size) {
    
}

int main() {
    commut(check);


    

    return 0;
}
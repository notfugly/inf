#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty()) {
                cout << "no";
                return 0;
            }

            char open = st.top();
            st.pop();

            if ((c == ')' && open != '(') ||
                (c == ']' && open != '[') ||
                (c == '}' && open != '{')) {
                cout << "no";
                return 0;
            }
        }
    }

    if (st.empty())
        cout << "yes";
    else
        cout << "no";

    return 0;
}
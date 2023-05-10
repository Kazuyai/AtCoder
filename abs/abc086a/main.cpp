#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b;

    cin >> a >> b;

    string result = ((a * b) % 2 == 0) ? "Even" : "Odd";

    cout << result << endl;
}
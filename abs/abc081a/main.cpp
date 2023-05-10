#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s;
    int count = 0;

    cin >> s;

    for(char c : s) {
        if(c == '1')
            count++;
    }

    cout << count << endl;
}
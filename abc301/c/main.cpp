#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s, t;
    bool can = true;
    getline(cin, s);
    getline(cin, t);

    rep(i, s.size()) {
        rep(j, t.size()) {
            if(s[i] == '@')
                break;
            if(s[i] == t[j]) {
                s.erase(s.begin() + i);
                t.erase(t.begin() + j);
                i--;
                j--;
                break;
            }
            if(j == t.size() - 1) {
                if(s[i] != 'a' && s[i] != 't' && s[i] != 'c' && s[i] != 'o' && s[i] != 'd' && s[i] != 'e' &&
                   s[i] != 'r') {
                    can = false;
                    i = s.size();
                    break;
                }
            }
        }
    }

    for(char i : s) {
        if(i != 'a' && i != 't' && i != 'c' && i != 'o' && i != 'd' && i != 'e' && i != 'r' && i != '@') {
            can = false;
            break;
        }
    }
    if(!can) {
        for(char i : t) {
            if(i != 'a' && i != 't' && i != 'c' && i != 'o' && i != 'd' && i != 'e' && i != 'r' && i != '@') {
                can = false;
                break;
            }
        }
    }

    if(can) {

        int count = 0;
        rep(i, s.size()) {
            if(s[i] == '@') {
                count++;
            }
            if(t[i] == '@') {
                count++;
            }
        }
        if(count < s.size()) {
            can = false;
        }
    }

    if(can) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
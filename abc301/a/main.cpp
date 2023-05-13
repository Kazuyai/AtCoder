#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<char> S;
    rep(i, N) {
        char input;
        cin >> input;
        S.push_back(input);
    }
    int count = 0;
    for(char i : S) {
        if(i == 'T') {
            count++;
        } else {
            count--;
        }
    }
    char winner;
    if(count == 0) {
        if(S[S.size() - 1] == 'T') {
            winner = 'A';
        } else {
            winner = 'T';
        }
    } else {
        if(count > 0) {
            winner = 'T';
        } else {
            winner = 'A';
        }
    }
    cout << winner << endl;
}
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;

    vector<int> a;
    rep(i, N) {
        int input;
        cin >> input;
        a.push_back(input);
    }

    vector<int> scores(2, 0);
    int turn = 0;
    sort(a.begin(), a.end());
    while(a.size() > 0) {
        scores[turn % 2] += a[a.size() - 1];
        a.pop_back();
        turn++;
    }

    cout << scores[0] - scores[1] << endl;
}
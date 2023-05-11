#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;

    vector<int> d;
    rep(i, N) {
        int input;
        cin >> input;
        d.push_back(input);
    }

    sort(d.begin(), d.end());

    int max_now = -1;
    int height = 0;
    for(int l : d) {
        if(max_now < l) {
            max_now = l;
            height++;
        }
    }
    cout << height << endl;
}
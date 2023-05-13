#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A;
    rep(i, N) {
        int input;
        cin >> input;
        A.push_back(input);
    }

    vector<int> result;
    rep(i, N) {
        result.push_back(A[i]);
        if(i == A.size() - 1)
            break;
        if(abs(A[i] - A[i + 1]) != 1) {
            int next = A[i];
            while(true) {
                if(A[i] - A[i + 1] > 0) {
                    next--;
                } else {
                    next++;
                }
                if(next == A[i + 1])
                    break;
                result.push_back(next);
            }
        }
    }
    rep(i, result.size()) {
        cout << result[i];
        if(i == result.size() - 1) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}
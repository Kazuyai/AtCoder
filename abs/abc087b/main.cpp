#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int A, B, C, X;
    int count = 0;

    cin >> A >> B >> C >> X;

    for(int i = 0; i <= A; i++) {
        for(int j = 0; j <= B; j++) {
            for(int k = 0; k <= C; k++) {
                int sum = i * 500 + j * 100 + k * 50;
                if(sum == X) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N, A, B;

    cin >> N >> A >> B;

    int sum = 0;

    for(int i = 1; i <= N; i++) {
        int digit_sum = 0;
        string num = to_string(i);
        for(char d : num) {
            digit_sum += int(d - '0');
        }
        if(digit_sum >= A && digit_sum <= B) {
            sum += i;
        }
    }

    cout << sum << endl;
}
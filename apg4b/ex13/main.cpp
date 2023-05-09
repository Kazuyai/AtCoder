#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> score(N);
    int sum = 0;

    for(int i = 0; i < N; i++) {
        cin >> score[i];
        sum += score[i];
    }

    int avg = sum / N;

    for(int i = 0; i < N; i++) {
        int dif = avg - score[i];
        if(dif < 0)
            dif *= -1;
        cout << dif << endl;
    }
}
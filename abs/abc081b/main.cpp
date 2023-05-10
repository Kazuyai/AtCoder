#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    vector<int> A;

    cin >> N;
    rep(i, N) {
        int num;
        cin >> num;
        A.push_back(num);
    }

    int divCount = 0;

    while(true) {
        bool canDiv = true;
        for(int i : A) {
            if(i % 2 == 1) {
                canDiv = false;
                break;
            }
        }
        if(!canDiv)
            break;
        for(int &i : A) {
            i /= 2;
        }
        divCount++;
    }

    cout << divCount << endl;
}
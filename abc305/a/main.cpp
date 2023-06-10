#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N;
    cin >> N;

    N = (N + 2) / 5;
    N *= 5;
    cout << N << endl;
}
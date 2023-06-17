#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{

    int N;
    cin >> N;
    vector<int> A;
    int count[N] = {};
    vector<int> center;
    rep(i, N * 3)
    {
        int input;
        cin >> input;
        count[input - 1]++;
        if (count[input - 1] == 2)
        {
            center.push_back(input);
        }
    }
    rep(i, N)
    {
        cout << center[i];
        if (i != N - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
}
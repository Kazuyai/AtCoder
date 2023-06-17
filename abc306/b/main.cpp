#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int sum = 0;

    rep(i, 64)
    {
        int input;
        cin >> input;
        int num = input * pow(2, i);
        sum += num;
    }
    cout << sum << endl;
}
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int H, W;
    cin >> H >> W;

    string first;
    bool exist = false;
    int firstCount;
    int firstHeight;
    int nextCount;
    vector<int> counts;
    rep(i, H)
    {
        string input;
        cin >> input;

        if (input.find("#") == string::npos)
        {
            continue;
        }

        if (!exist)
        {
            first = input;
            firstHeight = i;
            firstCount = count(first.begin(), first.end(), '#');
            exist = true;
        }
        else
        {
            nextCount = count(input.begin(), input.end(), '#');
            if (firstCount == nextCount)
            {
                continue;
            }

            rep(j, W)
            {
                if (first[j] != input[j])
                {
                    int result_h;
                    if (firstCount < nextCount)
                    {
                        result_h = firstHeight;
                    }
                    else
                    {
                        result_h = i;
                    }
                    cout << result_h + 1 << " " << j + 1 << endl;
                    i = H;
                    break;
                }
            }
        }
    }
}
#include <bits/stdc++.h>
#include <map>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string p, q;
    cin >> p >> q;

    map<string, int> place;
    place["A"] = 0;
    place["B"] = place["A"] + 3;
    place["C"] = place["B"] + 1;
    place["D"] = place["C"] + 4;
    place["E"] = place["D"] + 1;
    place["F"] = place["E"] + 5;
    place["G"] = place["F"] + 9;

    cout << abs(place.at(p) - place.at(q)) << endl;
}
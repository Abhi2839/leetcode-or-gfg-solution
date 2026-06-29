#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int n;
    cin >> n;

    unordered_map<string, int> mp;

    stringstream ss(s);
    string word;

    while (ss >> word)
        mp[word]++;

    vector<pair<string,int>> arr;

    for (auto x : mp)
        arr.push_back({x.first, x.second});

    sort(arr.begin(), arr.end(), [](auto &a, auto &b) {
        if (a.second == b.second)
            return a.first > b.first;   
        return a.second > b.second;    
    });

      n = min(n, (int)arr.size());

    for (int i = 0; i < n; i++) {
        cout << arr[i].first << " " << arr[i].second << '\n';
    }

    return 0;
}
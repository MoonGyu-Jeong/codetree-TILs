#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int n, k;
unordered_map<long long, long long> m;
vector<pair<int, long long>> v;

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m[x]++;
    }
    int max_count = 0;
    for (auto i : m) {
        v.push_back({i.second, i.first});
    }
    sort(v.begin(), v.end(), greater<>());

    for (int i = 0; i < k; i++)
        cout << v[i].second << " ";

    return 0;
}
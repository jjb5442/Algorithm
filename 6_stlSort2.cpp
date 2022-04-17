#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<string, pair<int, int>> a, const pair<string, pair<int, int>> b) {
    if (a.second.first == b.second.first) {
        return a.second.second > b.second.second;
    }
    else {
        return a.second.first > b.second.first;
    }
}

int main() {
    vector<pair<string, pair<int, int>>> v;
    v.push_back(pair<string, pair<int, int>>("A", make_pair(90, 1993)));
    v.push_back(pair<string, pair<int, int>>("B", make_pair(90, 1997)));
    v.push_back(pair<string, pair<int, int>>("C", make_pair(60, 1993)));
    v.push_back(pair<string, pair<int, int>>("D", make_pair(100, 1993)));
    v.push_back(pair<string, pair<int, int>>("E", make_pair(60, 1997)));

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i].first << " ";
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &st)
{
    int n = st.size();
    vector<vector<string>> res;

    unordered_map<string, vector<string>> map;

    for (int i = 0; i < n; ++i)
    {
        string temp = st[i];

        sort(temp.begin(), temp.end());
        map[temp].push_back(st[i]);
    }

    for (auto it : map)
    {
        res.push_back(it.second);
    }
    return res;
}

int main()
{
    // main function
}
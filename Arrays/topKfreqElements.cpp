#include <bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k)
{
    priority_queue<pair<int, int>> maxHp;
    unordered_map<int, int> freq;
    for (int i : nums)
    {
        freq[i]++;
    }

    for (auto it : freq)
    {
        maxHp.push({it.second, it.first});
    }

    vector<int> ans;
    while (k--)
    {
        ans.push_back(maxHp.top().second);
        maxHp.pop();
    }
    return ans;
}

int main()
{
    // main function
}
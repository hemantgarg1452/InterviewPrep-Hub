#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
    // first way...............
    unordered_set<int> s;
    for (int x : nums)
        s.insert(x);

    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        int current = nums[i];  // 5
        int prev = nums[i] - 1; // 4
        int count = 0;

        if (s.find(prev) == s.end())
        {
            while (s.find(current) != s.end())
            {
                current++;
                count++;
            }
        }
        res = max(res, count);
    }
    return res;

    // Second Way................
    unordered_set<int> set;
    for (int i = 0; i < nums.size(); ++i)
    {
        set.insert(nums[i]);
    }
    int res = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (set.find(nums[i] - 1) != set.end())
            continue;

        else
        {
            int count = 0;
            int current = nums[i];
            while (set.find(current) != set.end())
            {
                count++;
                current++;
            }
            res = max(res, count);
        }
    }
    return res;
}

int main()
{
    // main function
}
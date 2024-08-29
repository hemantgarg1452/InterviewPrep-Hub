#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> nums)
{
    //---------- Two Pointer (Brute Force) -> O(N^2)-------
    int n = nums.size();
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (nums[i] == nums[j])
                return true;
        }
    }
    return false;

    // ----------Sorting -> O(nLogn)-------
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 1; ++i)
    {
        if (nums[i] == nums[i + 1])
            return true;
    }
    return false;

    //---------- Using unordered map -> O(n)------------
    unordered_map<int, int> umap;
    for (int val : nums)
    {
        if (umap[val] >= 1)
        {
            return true;
        }
        umap[val]++;
    }
    return false;

    //------------using Unordered SET -> O(N)---------
    unordered_set<int> uset;
    for (int i = 0; i < nums.size(); i++)
    {
        uset.insert(nums[i]);
    }

    if (uset.size() < nums.size())
        return true;

    return false;

    //-----------Using Ordered MAP------
    map<int, int> mp;
    for (int i = 0; i < nums.size(); ++i)
    {
        mp[nums[i]]++;
    }

    for (auto val : mp)
    {
        if (val.second > 1)
            return true;

        return false;
    }
}

int main()
{
    vector<int> nums{1, 2, 3, 1};

    bool res = containsDuplicate(nums);

    if (res == 1)
        cout << "true" << endl;

    else
        cout << "false" << endl;
}
#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    // 1. Sorting Method--------------->
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;

    // 2. Using Map-------------------->
    if (s.size() != t.size())
        return false;
    int n = s.size();

    unordered_map<char, int> map;
    // count the frq. of s string
    for (auto x : s)
        map[x]++;

    // count the feq. of t string
    for (auto x : t)
        map[x]--;

    // check and compare both
    for (auto x : map)
    {
        if (x.second != 0)
            return false;
    }
    return true;

    // 2.5 diff. writing type of map------->
    for (int i = 0; i < n; i++)
    {
        map[s[i]]++;
        map[t[i]]--;
    }
    for (auto count : map)
        if (count.second)
            return false;
    return true;
}

int main()
{
    // main function
}
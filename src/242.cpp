#include<iostream>
#include<assert.h>
#include<vector>
#include <utility>
#include <unordered_set>
using namespace std;

// 遍历两边数组长度
bool isAnagram(string s, string t) {
    if (s.size() != t.size())
    {
        return false;
    }

    int count[26] = {0};
    for(int i = 0; i < s.size(); i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for(const int c : count)
    {
        if (c != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    return 0;
}
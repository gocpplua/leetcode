#include<iostream>
#include<assert.h>
#include<vector>
#include <unordered_set>
using namespace std;

// 可以使用暴力(会超时)/排序后比较/hash，下述是hash解法
bool containsDuplicate(vector<int>& nums) {
    int nSize = nums.size();
    if (nSize <= 1)
    {
        return false;
    }
    std::unordered_set<int> numSet;
    for(int i = 0; i < nSize; i++)
    {
        if (numSet.find(nums[i]) != numSet.end())
        {
            return true;
        }
        numSet.insert(nums[i]);
    }
    return false;
}

int main()
{

    return 0;
}
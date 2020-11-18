#include<iostream>
#include<assert.h>
#include<vector>
#include <unordered_map>
using namespace std;

// 可以一遍遍历就可以
vector<int> twoSum(vector<int>& nums, int target) {
    int nSize = nums.size();
    if (nSize <= 1)
    {
        return vector<int>{};
    }
    unordered_map<int, int> numsMap;
    for(int i = 0; i < nSize; i++)
    {
        if (numsMap.find(target - nums[i]) == numsMap.end())
        {
            numsMap[nums[i]] = i;
        }
        else
        {
            return vector<int>{numsMap[target - nums[i]], i};
        }
    }
    return vector<int>{};
}

int main()
{
    return 0;
}
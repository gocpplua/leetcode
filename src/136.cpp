#include<iostream>
#include<assert.h>
#include<vector>
#include <unordered_set>
using namespace std;

int singleNumber(vector<int>& nums) {
    int nSize = nums.size();
    int single = nums[0];
    for(int i = 1; i < nSize; i++)
    {
        single ^= nums[i];
    }
    return single;
}

int main()
{
    assert(singleNumber(vector<int>({1,2,3,4,1,2,3})) == 4);
    return 0;
}
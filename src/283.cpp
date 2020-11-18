// https://leetcode-cn.com/problems/move-zeroes/

#include<iostream>
#include<assert.h>
#include<vector>
#include <unordered_set>
using namespace std;

// 双指针法
// 注意：特别需要注意的是，pre这个值的计算，不能默认pre为0，否则用例 1 2 会出错
void moveZeroes(vector<int>& nums) {
    int nSize = nums.size();
    if (nSize <= 1)
    {
        return;
    }

    int pre = -1;
    for(int i = 0; i < nSize; i++)
    {
        if (0 == nums[i])
        {
            pre = i;
            break;
        }
    }
    if (-1 == pre)
    {
        // 没有找到0
        return;
    }
    
    for(int curr = pre + 1; curr < nSize; curr++)
    {
        if (0 != nums[curr])
        {
            nums[pre] = nums[curr];
            nums[curr] = 0;
            ++pre;
        }
    }
    return;
}

    int main(){
        //vector<int> nums{0,1,0,3,12};
        vector<int> nums{1,0,3,12};
        moveZeroes(nums);
        for(int i = 0; i < nums.size(); i++)
        {
            cout <<  nums[i] << endl;
        }
        return 0;
    }
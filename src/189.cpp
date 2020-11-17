// https://leetcode-cn.com/problems/rotate-array/

#include<iostream>
#include<assert.h>
#include<vector>
using namespace std;

// 每次移动1格，移动k次
// 时间复杂度：nk，超出时间限制
void rotate1(vector<int>& nums, int k) {
    int nSize = nums.size();
    if (nSize <= 1)
    {
        return;
    }
    k = k % nSize;
    for(int j = 0; j < k; j++)
    {
        int nPre = nums[nSize - 1];
       for(int i = 0; i < nSize; i++)
       {
           int temp = nums[i];
           nums[i] = nPre;
           nPre = temp;
       }
    }
    return;
}

// 使用环状替换
// 时间复杂度：n
// Warn: 需要注意的是找个count值的使用，以及do while
void rotate2(vector<int>& nums, int k) {
    int nSize = nums.size();
    if (nSize <= 1)
    {
        return;
    }
    k = k % nSize;
    int count = 0;
    for(int j = 0; count < nSize; j++)
    {
        int current = j;
       int nPre = nums[j];
       do
       {
           int next = (k + current) % nSize;
           int temp = nums[next];
           nums[next] = nPre;
           current = next;
           nPre = temp;
           count++;
       } while (current != j);
       
    }
    return;
}

// 使用反转
void reverse(vector<int>& nums, int start, int end) {
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void rotate(vector<int>& nums, int k) {
    int nSize = nums.size();
    k = k % nSize;
    reverse(nums, 0, nSize - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, nSize - 1);  
}

int main()
{
    return 0;
}
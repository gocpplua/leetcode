#include<iostream>
#include<assert.h>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int len = nums.size();
    if (len <= 1)
    {
        return len;
    }

    int sIndex = 0;
    for(int qIndex = 1; qIndex < len; qIndex++)
    {
        if (nums[sIndex] != nums[qIndex])
        {
            nums[++sIndex] = nums[qIndex];
        }
        
    }
    return sIndex + 1;
}

int main()
{
    assert(removeDuplicates(vector<int>{1,1,2}) == 2);
    assert(removeDuplicates(vector<int>{0,0,1,1,1,2,2,3,3,4}) == 5);
    assert(removeDuplicates(vector<int>{0,0,1,1,1,2,2,3,3,4}) == 4);
    return 0;
}
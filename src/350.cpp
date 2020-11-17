#include<iostream>
#include<assert.h>
#include<vector>
#include <unordered_map>
#include<algorithm>
using namespace std;

// hash
vector<int> intersect1(vector<int>& nums1, vector<int>& nums2) {
    int nSize1 = nums1.size();
    int nSize2 = nums2.size();
    vector<int> ret;
    if (nSize1 == 0 || nSize2 == 0)
    {
        return ret;
    }
    
    unordered_map<int, int> numsMap1;
    for(int i = 0; i < nSize1; i++)
    {
        if (numsMap1.find(nums1[i]) == numsMap1.end())
        {   
            numsMap1[nums1[i]] = 1;
        }
        else
        {
            numsMap1[nums1[i]] += 1;
        }
    }

    for(int i = 0; i < nSize2; i++)
    {
        if (numsMap1[nums2[i]] > 0)
        {
            ret.emplace_back(nums2[i]);
            numsMap1[nums2[i]] -= 1;
        }
        
    }
    return ret;
}

// 排序
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    int nSize1 = nums1.size();
    int nSize2 = nums2.size();
    vector<int> ret;
    if (nSize1 == 0 || nSize2 == 0)
    {
        return ret;
    }
    std::stable_sort (nums1.begin(), nums1.end());
    std::stable_sort (nums2.begin(), nums2.end());
    int index1 = 0;
    int index2 = 0;
    while (index1 < nSize1 && index2 < nSize2)
    {
        if(nums1[index1] == nums2[index2])
        {
            ret.emplace_back(nums1[index1]);
            index1++;
            index2++;
        }
        else
        {
            if (nums1[index1] > nums2[index2])
            {
               index2++;
            }
            else
            {
                index1++;
            }
        }
    }
    return ret;
}

int main()
{
    std::vector<int> num{1,2,6,3};
    std::stable_sort (num.begin(), num.end());
    for(int i = 0; i < num.size(); i++){
        cout << num[i] << endl;
    }
    
    return 0;
}
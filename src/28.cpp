#include<iostream>
#include<assert.h>
#include<vector>
#include<string>
#include <unordered_set>
using namespace std;
// 方案1：使用双指针进行比较
int strStr(string haystack, string needle) {
    int haySize = haystack.size();
    int needSize = needle.size();
    if (haySize < needSize)
    {
        return -1;
    }

    for(int i = 0; i <= haySize - needSize; i++)
    {
        bool find = true;
        for(int j = 0; j < needSize; j++)
        {
            if (haystack[i + j] != needle[j])
            {
                find = false;
                break;
            }
        }
        if (find)
        {
            return i;
        }
    }
    return -1;
}

// 方案2：使用hash -- 时间复杂度O(N)

int main()
{
    return 0;
}
#include<iostream>
#include<assert.h>
#include<vector>
#include <unordered_set>
using namespace std;

// 
vector<int> plusOne1(vector<int>& digits) {
    std::vector<int> third (digits.begin(),digits.end());
    std::reverse(third.begin(),third.end()); 
    bool flag = true;
    for(int i = 0; i < third.size(); i++)
    {
        if (third[i] + flag > 9)
        {
            third[i] = 0;
            flag = true;
            continue;
        }
        flag = false;
        third[i] += 1;
        break;
    }

    if (flag)
    {
        third.resize(third.size() + 1);
        third[third.size() - 1] = 1;
    }
    std::reverse(third.begin(),third.end()); 
    return third;
}

// 进位需要加一位是因为后面全是0了，重新分配新建一个数组，把第一个赋为0就好
// 执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
vector<int> plusOne(vector<int>& digits) {
    for(int i = digits.size() - 1; i >= 0; i--)
    {
        digits[i]++;
        if (digits[i] == 10)
        {
            digits[i] = 0;
        }
        else
        {
            return digits;
        }
    }

    digits.insert(digits.begin(), 1);
    return digits;
}

int main()
{

    return 0;
}
#include<iostream>
#include<assert.h>
#include<vector>
#include <utility>
#include <unordered_set>
using namespace std;

// 官方的代码有多余，因为int类型最大数和最小数开头的数字只能是1或2，所以如果有最后一次循环的话，pop的值一定为1或2
// https://leetcode-cn.com/problems/reverse-integer/solution/zheng-shu-fan-zhuan-by-leetcode/108970
int reverse(int x) {
    int recv = 0;
    while (x != 0)
    {
        int temp = x %10;
        x /= 10;
        if (recv > INT_MAX / 10 || (recv ==  INT_MAX / 10 && temp > 7))
        {
            return 0;
        }
        if (recv < INT_MIN / 10 || (recv ==  INT_MIN / 10 && temp < -8))
        {
            return 0;
        }
        
        recv = recv * 10 + temp;
    }
    return recv;
}
int main()
{
    cout << -54 % 10 << " " << -54 / 10;
    return 0;
}
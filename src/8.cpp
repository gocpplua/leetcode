#include<iostream>
#include<assert.h>
#include<vector>
#include <utility>
#include <unordered_set>
#include<cctype>
using namespace std;

int myAtoi(string s) {
    int recv = 0;
    int pos = 0;
    while (pos < s.size())
    {
        if(s[pos] == ' ')
        {
            ++pos;
            continue;
        }

        if (s[pos] == '-' || s[pos] == '+' || isdigit(s[pos]))
        {
            break;
        }
        
        return 0;
    }
    
    if (s[pos] == '-' || s[pos] == '+')
    {
        // 将该符号与之后面尽可能多的连续数字字符组合起来，形成一个有符号整数
        while (pos < s.size()){
            if (isdigit(s[pos]))
            {
                /* code */
            }
            
        }
    }    
    else
    {
        // 将其与之后连续的数字字符组合起来，形成一个整数
    }
    
}

int main()
{
    return 0;
}
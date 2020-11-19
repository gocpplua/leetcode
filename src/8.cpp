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
    

    bool positive = true;
    if (s[pos] == '-' || s[pos] == '+')
    {
        if (s[pos] == '-')
        {
            positive = false;
        }
        ++pos;   
    }

    while (pos < s.size()){
        if (isdigit(s[pos]))
        {
            recv = (s[pos] - '0') * (positive?1:-1);
            pos++;
            break;
        }
        return 0;
    }

    while (pos < s.size()){
        if (isdigit(s[pos]))
        {
            int temp = (s[pos] - '0');
            if (positive && (recv > INT_MAX / 10 || (recv == INT_MAX / 10 && temp > 7)))
            {
                return INT_MAX;
            }
            if (!positive && (recv < INT_MIN / 10 || (recv == INT_MIN / 10 && temp > 8)))
            {
                return INT_MIN;
            }   
            recv = recv * 10 + (s[pos] - '0') * (positive?1:-1);
            ++pos;
            continue;
        }
        break;
    }
    return recv;
}

int main()
{
    cout << myAtoi("-91283472332");
    return 0;
}
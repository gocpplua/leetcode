#include<iostream>
#include<assert.h>
#include<vector>
#include <utility>
#include <unordered_set>
#include<cctype>
using namespace std;

// 知识点: isalnum , tolower
bool isPalindrome(string s) {
    int lPos = 0;
    int rPos = s.size() - 1;
    while (lPos < rPos)
    {
        while (!isalnum(s[lPos]) && lPos < rPos)
        {
            ++lPos;
        }
        
        while (!isalnum(s[rPos]) && lPos < rPos)
        {
            --rPos;
        }

        if (tolower(s[lPos]) !=  tolower(s[rPos]))
        {
            return false;
        }
         ++lPos;
        --rPos;
    }
    return true;
}

int main()
{
    return 0;
}
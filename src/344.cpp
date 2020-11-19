#include<iostream>
#include<assert.h>
#include<vector>
#include <utility>
#include <unordered_set>
using namespace std;

// 使用const，性能上可以直接使用++，--； 而不是单独一行语句
void reverseString(vector<char>& s) {
    const int nSize = s.size();
    if (nSize <= 1)
    {
        return;
    }

    int lPos = 0;
    int rPos = nSize - 1;
    while (lPos < rPos)
    {
        swap(s[lPos++], s[rPos--]);
    }
    return;
}

int main()
{
    return 0;
}
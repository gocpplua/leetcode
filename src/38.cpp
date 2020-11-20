#include<iostream>
#include<assert.h>
#include<vector>
#include<string>
#include <unordered_set>
using namespace std;

// 参考高效拼接字符串：https://www.cnblogs.com/james6176/p/3222671.html
string countAndSay(int n) {
    string retStr("1");
    if (1 == n)
    {
        return retStr;
    }

    for(int i = 2; i <= n; i++)
    {
        string tmp("");
        char c = retStr[0];
        int count = 1;
        for(int j = 1; j < retStr.size(); j++)
        {
            if (retStr[j] == c)
            {
                ++count;
            }
            else
            {
                tmp += char(count + '0'); // 使用+= ，执行时间降低很多
                tmp += c;
                c = retStr[j];
                count = 1;
            }
        }
        tmp += char(count + '0');
        tmp += c;
        retStr = tmp;
    }
    return retStr;
}


int main()
{
    for(int i = 1; i <= 30; i++){
        cout << countAndSay(i) << endl;
    }
    return 0;
}
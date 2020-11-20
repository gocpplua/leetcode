#include<iostream>
#include<assert.h>
#include<vector>
#include<string>
#include <unordered_set>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (!strs.size())
    {
        return "";
    }

    int nFisrStrSize = strs[0].size();
    int nStrSize = strs.size();    
    for(int i = 0; i < nFisrStrSize; i++)
    {
        char c = strs[0][i];
        for(int j = 1; j < nStrSize; j++)
        {
            if (i == strs[j].size() || strs[j][i] != c)
            {
                return strs[0].substr(0, i);
            }
        }
    }
    return strs[0];
}


int main()
{
    
    return 0;
}
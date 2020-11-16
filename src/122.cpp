#include<iostream>
#include<assert.h>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int len = prices.size();
    if (len <= 1)
    {
        return 0;
    }

    int sum = 0;
    for(int i = 1; i < len; i++){
        int diff = prices[i] - prices[i - 1];
        if (diff > 0)
        {
            sum += diff;
        }
        
    }
    return sum;
}

int main()
{
    assert(maxProfit(vector<int>{1,1,2}) == 1);
    assert(maxProfit(vector<int>{0,0,1,1,1,2,2,3,3,4}) == 4);
    assert(maxProfit(vector<int>{0,0,1,1,1,2,2,3,3,4}) == 4);
    return 0;
}
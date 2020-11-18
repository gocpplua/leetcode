#include<iostream>
#include<assert.h>
#include<vector>
#include <unordered_set>
using namespace std;

// 我们可以使用三个hash表或者位运算操作
// 主要是推算出第ii宫，第jj格坐标：(3*(i/3)+j/3,3*(i%3)+j%3)
bool isValidSudoku(vector<vector<char>>& board) {  
    int row[9] = {0}, column[9] = {0}, s[9] = {0};
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if (board[i][j] == '.')
            {
                continue;
            }

            int tmp = board[i][j] - '0';
            int boxIndex = i / 3 * 3 + j / 3;          
            {
                if ((row[i] >> tmp & 1) == 1 
                || (column[j] >> tmp & 1) == 1 
                || (s[boxIndex] >> tmp & 1) == 1)
                {
                    return false;
                }
            }
            row[i] |= (1 << tmp);
            column[j] |= (1 << tmp);
            s[boxIndex] |= (1 << tmp);
        }
    }
    return true;
}

int main()
{
    return 0;
}
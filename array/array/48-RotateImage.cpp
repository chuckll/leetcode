#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
		for(int i = 0; i < n/2; i++)
		{
			vector<int> flag = matrix[i];
			matrix[i] = matrix[n-1-i];
			matrix[n-1-i] = flag;
		}
		for(int i = 0; i < n; i++)
		{
			for(int j = i+1; j < n;j++)
			{
				int flag = matrix[i][j];
				matrix[i][j] = matrix[j][i];
				matrix[j][i] = flag;
			}
		}
    }
};
#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {

		int m = matrix.size(), n = matrix[0].size();
		int left = 0, right = n - 1, top  = 0, bottom = m - 1;
		vector<int> res;
		int i = 0, j = 0;
		for(int count = 0; count < m*n;count++)
		{
			res.push_back(matrix[i][j]);
			if(i == left)
			{
				if(j < right)
				{
					j++;
				}else if(j == right)
				    i++;
				continue;
			}


			if(j == right)
			{
				if(i < bottom)
				{
					i++;
				}else if(i == bottom)
					j--;
				continue;
			}

			if(i == bottom)
			{
				if(j > left)
				{
					j--;
				}else if(j == left)
					i--;
				continue;

			}

			if(j == left)
			{
				if(i > top+1)
				{
					i--;
				}else if(i == top+1)
				{
					j++;
					left++;
					right--;
					top++;
					bottom--;
				}
				continue;
			}
		}
		return res;
    }
};
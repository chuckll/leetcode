#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        int row = A.size();
		int column = A[0].size();
		int res = 0;
		//第一列全变为1
		for(int i = 0; i < row; i++)
		{
			if(A[i][0] == 0)
			{
				A[i][0] = 1;
				for(int j = 1; j < column; j++)
				{
					if(A[i][j] == 1)
						A[i][j] = 0;
					else
						A[i][j] = 1;
				}
			}
		}

		for(int i = 1; i < column; i++)
		{
			int count = 0;
			for(int j = 0; j < row; j++)
			{
				if(A[j][i] == 1)
					count++;
			}
			if(count <= row/2)
			{
				for(int j = 0; j < row; j++)
				{
					if(A[j][i] == 0)
						A[j][i] = 1;
					else
						A[j][i] = 0;
				}
			}
		}

		for(int i = 0; i < row; i++)
		{
			for(int j = 0; j < column; j++)
			{
				res += pow(2,column-j-1)*A[i][j];
			}
		}

		return res;
    }
};
#include<stdio.h>
#include<vector>
using namespace std;

//https://blog.csdn.net/hy971216/article/details/80435515


class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> a;
		for(int i = 0; i <= rowIndex; i++)
		{
			for(int j = i-1; j > 0; j--)
			{
				a[j] = a[j] + a[j-1];
			}
			a.push_back(1);
		}
		return a;
    }
};
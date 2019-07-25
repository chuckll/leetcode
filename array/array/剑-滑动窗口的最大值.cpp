#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;



class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
        int n = num.size();
		int left = 0, right = left+size-1;
		vector<int> res;
		if(size <= 0 || right > n-1)
			return res;
		if(size == 1)
			return num;
		if(right == n-1)
		{
			res.push_back(*(max_element(num.begin(),num.end())));
			return res;
		}
		for(;right <= n-1; right++,left++)
		{
			res.push_back(*(max_element(num.begin()+left,num.begin()+right+1)));
		}
		return res;
    }
};
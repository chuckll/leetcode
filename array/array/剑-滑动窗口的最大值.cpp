#include<stdio.h>
#include<vector>
#include<deque>
using namespace std;



class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
        vector<int> res;
		deque<int> dq;
		if(num.size() == 0)
			return res;
		if(size == 0)
			return num;
		if(size > num.size())
		{
			auto p = max(res.begin(),res.end());
			res.push_back(*p);
			return res;
		}

		for(int i = 0; i < num.size(); i++)
		{
			
		}
		return res;
    }
};
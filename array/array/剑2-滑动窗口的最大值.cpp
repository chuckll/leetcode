#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
        vector<int> res;
		int n = num.size();
		if(size > n || size == 0)
		{
			return res;
		}
       

		int l = 0, r = l+size-1;
		while(r < n)
		{

			res.push_back(*max_element(num.begin()+l,num.begin()+r+1));
			l++;
			r++;
		}
		return res;

    }
};
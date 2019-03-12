#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
    vector<int> partitionLabels(string S) {
		vector<int> res;
        int n = S.size();
		int counts = 0;
		vector<int> Comax(501,-1);     //vector 初始化不能用变量n
		int start = 0;
		while(counts < n)
		{
			vector<int> same;
			char c = S[start];
			same.push_back(start);
			int end = start;
			for(int i = start + 1; i < n; i++)
			{
				if(S[i] == c)
				{
					same.push_back(i);
					end = i;
				}
			}
			for(int i = 0; i < same.size(); i++)
			{
				Comax[same[i]] = end;
				counts++;
			}
			start++;
			while(Comax[start] != -1)
			{
				start++;
			}
			same.clear();
		}

		int begin = 0;
		while(begin < n)
		{
			int end = Comax[begin];
			for(int  i = begin+1; i <= end; i++)
			{
				if(Comax[i] <= end)
					continue;
				else
				{
					end = Comax[i];
				}
			}
			res.push_back(end-begin+1);
			begin = end + 1;
		}
		return res;
    }
};
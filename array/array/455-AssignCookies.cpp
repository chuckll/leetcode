#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;





class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
		sort(g.begin(),g.end());
		sort(s.begin(),s.end());
		int res = 0;
		int j = 0;
		for(int i = 0; i < g.size(); )
		{
			if(j == s.size())
				break;
			if(s[j] >= g[i])
			{
				j++;
				i++;
				res++;
			}else{
				j++;
			}
		}
		return res;
    }
};
#include<stdio.h>
#include<vector>
#include<map>
using namespace std;




class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int n = points.size();
		int res = 0;
		for(int i = 0; i < n; i++)
		{
			map<int,int> mp;
			pair<int,int> p0 = points[i];
			for(int j = 0; j < n; j++)
			{
				if(j == i)
					continue;
				pair<int,int> p1 = points[j];
				int dis = pow(p0.first-p1.first,2) + pow(p0.second-p1.second,2);
				map<int,int>::iterator it;
			    it = mp.find(dis);
				if(it != mp.end())
				{
					it->second++;
				}else{
					mp.insert(pair<int,int>(dis,1));
				}
			}
			map<int,int>::iterator iter;
			for(iter = mp.begin(); iter != mp.end(); iter++)
			{
				int num = iter->second;
				if(num > 1)
				{
					res += num*(num-1);
				}
			}
		}
		return res;
    }
};
#include<vector>
#include<stdio.h>
#include<map>
#include<algorithm>
using namespace std;


class Solution {
public:
	typedef pair<int,int> pii;
	bool static cmp(pii a,pii b)
	{
		return a.second > b.second;

	}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> numTofrequency;
		vector<pii> v;
		for(int i = 0; i < nums.size(); i++)
		{
			map<int,int>::iterator it;
			it = numTofrequency.find(nums[i]);
			if(it != numTofrequency.end())
			{
				it->second++;
			}else{
				numTofrequency.insert(pair<int,int>(nums[i],0));
			}
		}
		map<int,int>::iterator mit;
		for(mit = numTofrequency.begin(); mit != numTofrequency.end(); mit++)
		{
			v.push_back(pii(mit->first,mit->second));
		}
		sort(v.begin(),v.end(),cmp);
		vector<int> result;
		for(int i = 0; i < k; i++)
		{
			result.push_back(v[i].first);
		}
		return result;
    }
};
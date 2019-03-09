#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;





class Solution {
public:
	 bool static compare(pair<int, int> a,pair<int, int> b)
	{
		if(a.first != b.first)
			return a.first > b.first;
		else
			return a.second < b.second;

	}

    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
       
		vector<pair<int,int>> res;
		sort(people.begin(),people.end(),compare);
		for(int i = 0; i < people.size(); i++)
		{
			res.insert(res.begin()+people[i].second,people[i]);
		}
		return res;

    }
};
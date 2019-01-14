#include<stdio.h>
#include<vector>
#include<map>
#include<math.h>
#include<algorithm>
using namespace std;



class Solution {
public:
	bool static cmp_by_value(pair<int,double> p1,pair<int,double> p2)
	{
		return p1.second < p2.second;
	}

    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        map<int,double> m;
		int n = points.size();
		vector<vector<int>> res;
		vector<pair<int,double>> v;
		for(int i = 0; i < n; i++)
		{
			double dis = sqrt(points[i][0]*points[i][0] + points[i][1]*points[i][1]);
			m.insert(pair<int,double>(i,dis));
			v.push_back(pair<int,double>(i,dis));
		}
		sort(v.begin(),v.end(),cmp_by_value);
		for(int i = 0; i < K; i++)
		{
			int index = v[i].first;
			res.push_back(points[index]);
		}
		return res;
    }
};
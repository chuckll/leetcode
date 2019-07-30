#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;



class Solution {
public:
	vector<int> all;
    void Insert(int num)
    {
		all.push_back(num);
    }

    double GetMedian()
    { 
		sort(all.begin(),all.end());
		int n = all.size();
		if(n%2 == 1)
		{
			return all[n/2];
		}else{
			return (all[n/2-1]+all[n/2])/2.0;
		}
    
    }

};
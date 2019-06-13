
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
		int n = all.size();
		sort(all.begin(),all.end());
		if(n%2 == 1)
		{
			return all[n/2];
		}else{
			return (all[n/2]+all[n/2-1])/2.0;
		}
    
    }

};
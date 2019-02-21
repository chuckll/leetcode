#include<stdio.h>
#include<vector>
using namespace std;






class RecentCounter {
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
		s.push_back(t);
		int count = 0;
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] >= t-3000 && s[i] <= t)
				count++;
		}
		return count;
    }

    vector<int> s;
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
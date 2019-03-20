#include<stdio.h>
#include<map>
using namespace std;




class MapSum {
	map<string,int> mp;
public:
    /** Initialize your data structure here. */
    MapSum() {

    }
    
    void insert(string key, int val) {
        if(mp.size() == 0)
			mp.insert(pair<string,int>(key,val));
		else{
			map<string,int>::iterator iter;
			iter = mp.find(key);
			if(iter != mp.end())
				iter->second = val;
			else
				mp.insert(pair<string,int>(key,val));
		}
    }
    
    int sum(string prefix) {
		map<string,int>::iterator iter;
		int res = 0;
		for(iter = mp.begin(); iter != mp.end(); iter++)
		{
			size_t found = iter->first.find(prefix);
			if(found != string::npos)
			{
				if(found == 0)
					res += iter->second;
			}
		}
		return res;
        
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum obj = new MapSum();
 * obj.insert(key,val);
 * int param_2 = obj.sum(prefix);
 */
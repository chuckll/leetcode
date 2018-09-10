#include<vector>
#include<algorithm>

using namespace std;

struct Interval {
	int start;
	int end;
	Interval() : start(0), end(0) {}
	Interval(int s, int e) : start(s), end(e) {}
};

bool cmp(Interval a,Interval b)
{
	if(a.start != b.start)
		return a.start < b.start;
	else
		return a.end < b.end;

}

class Solution {
public:
    vector<Interval> merge(vector<Interval>& intervals) {

		 vector<Interval> result;
        if(intervals.size() != 0)
       {
		sort(intervals.begin(),intervals.end(),cmp);
		Interval a = intervals[0];
		for(int i = 1; i < intervals.size(); i++)
		{
			if( intervals[i].start > a.end)
			{
				result.push_back(a);
				a = intervals[i];
			}else{
				if( intervals[i].end > a.end)
				{
					a.end = intervals[i].end;
				}
			}
		}
        result.push_back(a);
      }
        return result;
	}

};
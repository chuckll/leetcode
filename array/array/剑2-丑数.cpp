#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    int GetUglyNumber_Solution(int index) {
		if(index < 7)
			return index;
		vector<int> arr;
		arr.push_back(1);
		int p1 = 0, p2 = 0, p3 = 0;
		for(int i = 0; i < index; i++)
		{
			int temp = min(arr[p1]*2,min(arr[p2]*3,arr[p3]*5));
			if(temp == arr[p1]*2) p1++;
			if(temp == arr[p2]*3) p2++;
			if(temp == arr[p3]*5) p3++;
			arr.push_back(temp);
		}
		return arr[index-1];
    }
};
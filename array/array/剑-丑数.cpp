#include<stdio.h>
#include<vector>
using namespace std;


//¿´ÌÖÂÛÇø

class Solution {
public:
    int GetUglyNumber_Solution(int index) {
		if(index < 7) return index;
		vector<int> arr;
		arr.push_back(1);
		int p1 = 0, p2 = 0, p3 = 0;
		for(int i = 1; i < index; i++)
		{
			int newNum = min(arr[p1]*2,min(arr[p2]*3,arr[p3]*5));
			if(arr[p1]*2 == newNum) p1++;
			if(arr[p2]*3 == newNum) p2++;
			if(arr[p3]*5 == newNum) p3++;
			arr.push_back(newNum);
		}
		return arr[index-1];
    }
};
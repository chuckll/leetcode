#include<stdio.h>
#include<vector>
using namespace std;




class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
		int n = letters.size();
		int l = 0, h = n-1;
		while(l <= h)
		{
			int mid = l +(h-l)/2;
			if(letters[mid] <= target)
			{
				l = mid + 1;
			}else{
				h = mid -1;
			}
		}
		return letters[l%n];

    }
};
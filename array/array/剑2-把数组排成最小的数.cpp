#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


class Solution {
public:

	static bool cmp(int a,int b)
	{
		string s1 = "";
		string s2 = "";
		string A = to_string(a);
		string B = to_string(b);
		s1 += A;
		s1 += B;
		s2 += B;
		s2 += A;

		return s1 < s2;

	}

    string PrintMinNumber(vector<int> numbers) {
        
		sort(numbers.begin(),numbers.end(),cmp);
		string res = "";
		for(int i = 0; i < numbers.size(); i++)
		{
			res += to_string(numbers[i]);
		}
		return res;




    }
};
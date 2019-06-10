#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;




class Solution {
public:
	static bool cmp(int a,int b)
	{
		string A = "";
		string B = "";
		A += to_string(a);
		A += to_string(b);
		B += to_string(b);
		B += to_string(a);

		return A < B;
	}



    string PrintMinNumber(vector<int> numbers) {
        string res = "";
		sort(numbers.begin(),numbers.end(),cmp);
		for(int i = 0;i < numbers.size(); i++)
			res += to_string(numbers[i]);
		return res;
    }
};


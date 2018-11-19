//#include<stdlib.h>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//bool cmp(string a,string b)
//{
//	if(a.length() != b.length())
//		return a.length() > b.length();
//	else
//		return a < b;
//}
//
//
//class Solution {
//public:
//    string findLongestWord(string s, vector<string>& d) {
//		vector<string> remainder;
//		for(int i = 0; i < d.size(); i++)
//		{
//			string copy = s;
//			bool flag = true;
//			string result="";
//			for(int j = 0; j < d[i].size(); j++)
//			{
//				if(copy.find(d[i][j]) == string::npos)
//				{
//					flag = false;
//					break;
//				}
//				else
//				{
//					copy.erase(remove(copy.begin(),copy.end(),d[i][j]),copy.end());
//					result.append(d[i][j]+"");
//				}
//				
//			}
//			if( flag == true)
//			    remainder.push_back(result);
//		}
//		sort(remainder.begin(),remainder.end(),cmp);
//		if(remainder.size() == 0)
//			return "";
//		else
//		    return remainder[0];
//    }
//
//};
//
//
//	int main()
//	{
//		string s = "abpcplea";
//		vector<string> d;
//		class Solution sol;
//		d.push_back("ale");
//		d.push_back("apple");
//		d.push_back("monkey");
//		d.push_back("plea");
//		string res = sol.findLongestWord(s,d);
//		int a = 1;
//	}
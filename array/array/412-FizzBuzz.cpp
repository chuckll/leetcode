//#include<vector>
//#include<sstream>
//using namespace std;
//
//
//
//class Solution {
//public:
//    vector<string> fizzBuzz(int n) {
//		vector<string> result;
//        for(int i = 1; i <= n; i++)
//		{
//			if( i % 3 == 0 || i % 5 == 0)
//			{
//			if(  i % 3 == 0 && i % 5 == 0)
//				result.push_back("FizzBuzz");
//			else if( i % 3 == 0)
//				result.push_back("Fizz");
//			else if( i % 5 == 0)
//				result.push_back("Buzz");
//			}else
//			{
//				string s;
//				stringstream ss;
//				ss << i;
//			    s = ss.str();
//				result.push_back(s);
//			}
//
//		}
//		return result;
//    }
//};
//
//
//int main()
//{
//	Solution s;
//	vector<string> a;
//	a = s.fizzBuzz(3);
//}
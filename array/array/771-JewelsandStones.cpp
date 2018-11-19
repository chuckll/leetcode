//#include<string>
//
//using namespace std;
//
//
//
//
//
//class Solution {
//public:
//    int numJewelsInStones(string J, string S) {
//        const int maxn = 80;
//		int hashTable[maxn] = {0};
//		for(int i = 0; i < J.size(); i++)
//		{
//			int id;
//			if(J[i] >= 'A' && J[i] <= 'Z')
//			   id = J[i] - 'A';
//			else 
//			   id = J[i] - 'a' + 26;
//			hashTable[id] = 1;
//		}
//		int result = 0;
//		for(int j = 0; j < S.size(); j++)
//		{
//			int id;
//			if(S[j] >= 'A' && S[j] <= 'Z')
//			   id = S[j] - 'A';
//			else 
//			   id = S[j] - 'a' + 26;
//			if(hashTable[id] == 1)
//				result++;
//		}
//		return result;
//    }
//};
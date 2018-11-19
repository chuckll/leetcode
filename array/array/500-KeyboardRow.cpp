//#include<string>
//#include<vector>
//
//using namespace std;
//
//
//class Solution {
//public:
//    vector<string> findWords(vector<string>& words) {
//        string s1 = "QWERTYUIOP", s2 = "ASDFGHJKL",s3 = "ZXCVBNM";
//		const int maxn = 80;
//		int hashTable[maxn] = {0};
//		vector<string> result;
//		for(int i = 0; i < s1.size();i++)
//		{
//			int id = s1[i] - 'A';
//			hashTable[id] = 1;
//			hashTable[id + 26] = 1;
//		}
//		for(int i = 0; i < s2.size();i++)
//		{
//			int id = s2[i] - 'A';
//			hashTable[id] = 2;
//			hashTable[id + 26] = 2;
//		}
//		for(int i = 0; i < s3.size();i++)
//		{
//			int id = s3[i] - 'A';
//			hashTable[id] = 3;
//			hashTable[id + 26] = 3;
//		}
//		for(int i = 0; i < words.size(); i++)
//		{
//			int flag = 0;
//			int j;
//			for(j = 0; j < words[i].size(); j++)
//			{
//				int id;
//				if( words[i][j] >= 'A' && words[i][j] <= 'Z')
//					id = words[i][j] - 'A';
//				else
//					id = words[i][j] - 'a' + 26;
//				int  line;
//				line = hashTable[id];
//				if(flag == 0)
//				{
//					flag = line;
//				}else{
//
//					if( flag == line )
//						continue;
//					else
//						break;
//				}
//			}
//			if( j == words[i].size())
//				result.push_back(words[i]);
//		}
//		return result;
//    }
//};
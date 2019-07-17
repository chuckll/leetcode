#include<stdio.h>
#include<string>
using namespace std;


//class Solution {
//public:
//    string LeftRotateString(string str, int n) {
//        string res;
//		int s = str.size();
//		if(s == 0)
//			return str;
//		n = n % s;
//		if(n == 0)
//			return str;
//		res = str.substr(n);
//		res.append(str.substr(0,n));
//		return res;
//    }
//};



//ÌÖÂÛÇø´ğ°¸
class Solution {
public:
    string LeftRotateString(string str, int n) {
		int s = str.size();
		if(s == 0)
			return str;
		n = n % s;
		str += str;
		return str.substr(n,s);
    }
};
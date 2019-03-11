//#include <iostream>
//#include <vector>
//#include<math.h>
//#include <cstdio>
//
//using namespace std;
//
//int main(){
//    int n;
//	vector<int> res;
//    cin >> n;
//    for(int i = 0; i < n; i++){
//			int l,r;
//            scanf("%d %d",&l,&r);
//			int ans = 0;
//			if(l%2 == 0)
//			{
//				ans += l*pow(-1,l);
//				l++;
//			}
//			if(r%2 == 1)
//			{
//				ans += r*pow(-1,r);
//				r--;
//			}
//			if(r < l)
//				res.push_back(ans);
//			else{
//				ans += (r-l+1)/2;
//				res.push_back(ans);
//			}
//  
//    }
//
//	for(int i = 0 ; i < res.size(); i++)
//	{
//		cout << res[i] << endl;
//	}
//    return 0;
//}
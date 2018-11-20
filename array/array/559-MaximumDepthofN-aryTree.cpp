//#include<stdio.h>
//#include<vector>
//#include<stack>
//using namespace std;
//
//class Node {
//public:
//    int val;
//    vector<Node*> children;
//
//    Node() {}
//
//    Node(int _val, vector<Node*> _children) {
//        val = _val;
//        children = _children;
//    }
//};
//
//class Solution {
//public:
//    int maxDepth(Node* root) {
//        stack<Node*> s;
//		int max = 0;
//		if(root == NULL)
//			return max;
//		root->val = 1;
//		s.push(root);
//
//		while( !s.empty() )
//		{
//			Node* flag = s.top();
//			s.pop();
//			if( flag->val > max)
//			{
//				max = flag->val;
//			}
//
//			if( flag->children.size() != 0 )
//			{
//				for(int  i = 0; i < flag->children.size(); i++)
//				{
//					Node* child = flag->children[i];
//					if(child != NULL)
//					     child->val = flag->val + 1;
//					s.push(child);
//				}
//			}
//		}
//		return max;
//    }
//};
//
//
//
//
////更好的办法：每次压入一个层的结点
//class Solution {
//public:
//    int maxDepth(Node* root) {
//        if(!root) return 0;
//        queue<Node*>q;
//        q.push(root);
//        int res=0;
//        while(!q.empty())
//        {
//            ++res;
//            for(int i=q.size();i>0;--i)
//            {
//                Node*t=q.front();
//                q.pop();
//                if(!t->children.empty())
//                {
//                    for(auto a:t->children)
//                        q.push(a);
//                }
//            }
//        }
//        return res;
//    }
//};
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
//    vector<int> postorder(Node* root) {
//        stack<Node*> s;
//		stack<int> output;
//		vector<int> result;
//
//		if(root == NULL)
//			return result;
//
//		s.push(root);
//		while( !s.empty() )
//		{
//			Node* flag;
//			flag = s.top();
//			output.push(flag->val);
//			s.pop();
//
//			if(flag->children.size() != 0)
//			{
//				for(int i = 0; i < flag->children.size(); i++)
//				{
//					s.push(flag->children[i]);
//				}
//			}
//		}
//
//		while( !output.empty() )
//		{
//
//			result.push_back(output.top());
//			output.pop();
//		}
//
//		return result;
//    }
//};
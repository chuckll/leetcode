//class Solution {
//public:
//    int maxArea(vector<int>& height) {
//        int left = 0;
//        int right = height.size() -  1;
//        int max =  (right - left)*min(height[left],height[right]);
//        while(left < right)
//        {
//            if(height[left] < height[right])
//            {
//                left++;
//            }else
//            {
//                right--;
//            }
//            int value = (right - left)*min(height[left],height[right]);
//            if(value > max)
//                max = value;
//            
//        }  
//        return max;
//    }
//};
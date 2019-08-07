#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int InversePairs(vector<int> data) {
        vector<int> copy(data);
		return mergeSort(data,copy,0,data.size()-1)%1000000007;
    }



	int mergeSort(vector<int>& data,vector<int>& copy,int begin,int end)
	{
		if(begin == end)
        {
			copy[begin] = data[begin];
            return 0;
        }
		int mid = begin+(end-begin)/2;
		int leftCounts = mergeSort(data,copy,begin,mid)%1000000007;
		int rightCounts = mergeSort(data,copy,mid+1,end)%1000000007;
		int firstBack = mid;
		int seconBack = end;
		int index = end;
		int count = 0;
		vector<int> copy(data);
		while(firstBack >= begin && seconBack >= mid+1)
		{

			if(data[firstBack] > data[seconBack])
			{
				count += seconBack - mid;
				copy[end--] = data[firstBack--];
                if(count>=1000000007)//数值过大求余
                    count%=1000000007;
			}else{
				copy[end--] = data[seconBack--];
			}
		}

		while(firstBack >= begin)
		{
			copy[end--] = data[firstBack--];
		}
		while(seconBack >= mid+1)
		{
			copy[end--] = data[seconBack--];
		}
		

		return (leftCounts+rightCounts+count)%1000000007;
	}


};




///////
class Solution {
public:
    int InversePairs(vector<int> data) {
       int length=data.size();
        if(length<=0)
            return 0;
       //vector<int> copy=new vector<int>[length];
       vector<int> copy;
       for(int i=0;i<length;i++)
           copy.push_back(data[i]);
       long long count=InversePairsCore(data,copy,0,length-1);
       //delete[]copy;
       return count%1000000007;
    }
    long long InversePairsCore(vector<int> &data,vector<int> &copy,int start,int end)
    {
       if(start==end)
          {
            copy[start]=data[start];
            return 0;
          }
       int length=(end-start)/2;
       long long left=InversePairsCore(copy,data,start,start+length);
       long long right=InversePairsCore(copy,data,start+length+1,end); 
        
       int i=start+length;
       int j=end;
       int indexcopy=end;
       long long count=0;
       while(i>=start&&j>=start+length+1)
          {
             if(data[i]>data[j])
                {
                  copy[indexcopy--]=data[i--];
                  count=count+j-start-length;          //count=count+j-(start+length+1)+1;
                }
             else
                {
                  copy[indexcopy--]=data[j--];
                }          
          }
       for(;i>=start;i--)
           copy[indexcopy--]=data[i];
       for(;j>=start+length+1;j--)
           copy[indexcopy--]=data[j];       
       return left+right+count;
    }
};
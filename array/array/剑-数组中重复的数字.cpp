#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
		vector<bool> isVisited(length,false); 
		for(int i = 0; i < length; i++)
		{
			int num = numbers[i];
			if(isVisited[num] == false)
			{
				isVisited[num] = true;
			}else{
				*duplication = num;
				return true;
			}
		}
		return false;
    }
};
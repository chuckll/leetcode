#include<stdio.h>
#include<unordered_set>
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
		unordered_set<int> set;
		if(length <= 1)
			return false;
		for(int i = 0; i < length; i++)
		{
			if(set.count(numbers[i]))
			{
				*duplication = numbers[i]; 
				return true;
			}
			else
				set.insert(numbers[i]);
		}
		return false;
    }
};
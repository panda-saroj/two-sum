#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Solution class
//Added Test Comment

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

    vector<int> result;
	vector<int> copy;
    copy = nums;
	sort(copy.begin(),copy.end());
        for(int i = 0,j = nums.size()-1;;){
		  if(copy[i] + copy[j] < target)
		    i++;
		  else if(copy[i] + copy[j] > target)
		    j--;
		  else{
		    int index1 = find(nums.begin(),nums.end(),copy[i]) - nums.begin();
			int index2;
			if(copy[i] == copy[j]){
			  index2 = find(nums.begin()+index1 + 1 ,nums.end(),copy[j]) - nums.begin();
//            index2 = find(nums.begin(),nums.end(),copy[j]) - nums.begin();
			}
			else
			  index2 = find(nums.begin(),nums.end(),copy[j]) - nums.begin();
            result.push_back(index1);
            result.push_back(index2);


  			return result;
		  }
	    }
    }

};

int main()
{

    vector<int> v = {3,2,3};
    int target = 6;

    Solution sol;
    vector<int> res = sol.twoSum(v, target);


    for(int i=0; i< res.size(); i++)
        cout<<res[i]<<" "<<endl;


}

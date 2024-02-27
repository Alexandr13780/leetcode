#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>a;
        for(int i=0;i<nums.size();i++){
    		auto it=a.find(target-nums[i]);
			if(it!=a.end()){
				return {it->second,i};
			} 
			a[nums[i]]=i;
	   }
	   return{-1,-1};
    }
};

int main() {
    vector<int> a;
    a = {2, 7, 11, 15};
    int target = 9;
    Solution solution;
    
    // 分别输出两个索引
    vector<int> result = solution.twoSum(a, target);
    cout << result[0] << " " << result[1] << endl;
}


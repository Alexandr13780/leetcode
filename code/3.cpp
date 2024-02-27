#include<iostream>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s){
        unordered_set<char> occ;
        int n=s.size();
        int rk=-1,ans=0;
        for(int i=0;i<n;i++){
        	if(i!=0){
        		//左指针向右移动一格，移除一个字符
				occ.erase (s[i-1]); 
			}
			while(rk+1<n&&!occ.count(s[rk+1])){
				occ.insert(s[rk+1]);
				rk++;
			}
			//第i到rk个字符是一个极长的无重复字符子串
			ans=max(ans,rk-i+1); 
		}
		return ans;
    }
};

int main() {
    Solution solution;
    string a="abadecd";
    int ans=solution.lengthOfLongestSubstring(a);
    cout<<ans<<endl;
}


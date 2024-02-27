class Solution {
public:
    string longestPalindrome(string s) {
        int left,right;
        int start=0,end=0;
        for(int i=0;i<s.length();i++){
            left=i-1;
            right=i+1;
            while(left>=0&&s[left]==s[i]){
                left--;
            }
            while(right<=s.size()-1&&s[right]==s[i]){
                right++;
            }
            if((right-1)-(left+1)>end-start){
                start=left+1;
                end=right-1;
            }
            while(left>=0&&right<=s.size()-1&&s[left]==s[right]){
                if(right-left>end-start){
                    start=left;
                    end=right;
                }
                left--;
                right++;
            }
        }
        return s.substr(start,end-start+1);
    }
};

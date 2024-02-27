/**
	this is o(m+n) measure to Q4, there is also quicker measure that arrive o(log(m+n))
**/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int p,q;
        int num=nums1.size()+nums2.size();
        if(num%2==0){//even 
        	int i=-1,j=-1,cnt=0;
        	int low=0,high=0;//for example: low is 4 in 8, high is 5 in 8
        	while(1){
        		if(!nums1[i+1]&&nums2[j+1]){
                	j++;
                	cnt++;
                	if(cnt==num/2){
                    	low=nums2[j];
                	}
                	if(cnt==(num/2+1)){
                		high=nums2[j];
                		return((low+high)/2);
					}
            	}else if(nums1[i+1]&&!nums2[j+1]){
               		i++;
                	cnt++;
                	if(cnt==num/2){
                    	low=nums1[i];
                	}
                	if(cnt==(num/2+1)){
                		high=nums1[i];
                		return((low+high)/2);
					}
            	}else{//nums1 and nums2 all exist
                	if(nums1[i+1]>nums2[j+1]){
                   		j++;
                    	cnt++;
                    	if(cnt==num/2){
                        	low=nums2[j];
                    	}
                    	if(cnt==(num/2+1)){
                    		high=nums2[j];
                    		return((low+high)/2);
						}
                	}else{
                    	i++;
                    	cnt++;
                    	if(cnt==num/2){
                        	low=nums1[i];
                    	}
                    	if(cnt==(num/2+1)){
                    		high=nums1[i];
                    		return((low+high)/2);
						}
                	}
            	}    
			}  
        }else{//odd is easier than even
                
        }
    }
};

int main(){
	
}

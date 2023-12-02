/*

Question:  Check if Array Is Sorted and Rotated


Intuition:

(A):  Take a counter variable and check if arr[i-1]>arr[i]. Increase counter.
      In last add a condition that if arr[last]>arr[0], increase counter.
      If counter <=1 , then it is sorted and rotated else not.

*/

class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                count++;
            }
        }
        if(nums[nums.size()-1]>nums[0]){
            count++;
        }
        if(count<=1){
            return true;
        }
        return false;
        
    }
};
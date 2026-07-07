class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int lastSmall = INT_MIN;
        int count=0,len=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1 == lastSmall){
                count++;
                lastSmall = nums[i];
            }
            else if(nums[i] != lastSmall){
                count=1;
                lastSmall=nums[i];
            }
            len = max(len,count);
        }
        return len;
    }
};
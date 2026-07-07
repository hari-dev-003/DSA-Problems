class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
       if(arr.size()<3) return false;

       int left =0,right=arr.size()-1;
       while(left+1<arr.size() && arr[left]<arr[left+1])
            left++;

        while((right) > 0 && arr[right-1]>arr[right])
            right--;
        
        return left > 0 && right < arr.size() - 1 && left==right;
    }
};
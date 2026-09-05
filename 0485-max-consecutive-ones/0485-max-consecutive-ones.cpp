class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int k =0;
        int maxCount = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==1){
                k++;
                maxCount = max(maxCount,k);
            }
            else{
                k=0;
            }
        }
        return maxCount;
    }
};
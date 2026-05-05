class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j =0;
       
        if(j==-1) return;
        for(int i =0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }

        }
    }
};

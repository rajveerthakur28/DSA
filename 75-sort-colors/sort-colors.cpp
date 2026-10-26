class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mark =0;
        
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] ==0){
                swap(nums[i],nums[mark]);
                mark++;
                }
            }

     for(int k = mark; k<nums.size(); k++){
            if(nums[k] == 1){
                swap(nums[k],nums[mark]);
                mark++;
                    }
                
            }
             
    }
};
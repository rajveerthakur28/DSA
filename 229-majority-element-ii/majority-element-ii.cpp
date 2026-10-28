class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count = 0;
        sort(nums.begin(),nums.end());
        vector<int> ans;
        set<int> temp;

        int n = nums.size();
        int element = nums[0];
        for(int i =0; i<nums.size(); i++){
            if(nums[i] == element){
                count++;
            }
            if(nums[i] != element){
                element = nums[i];
                count =1;
            }
        
            if(count > (n/3)){      
                temp.insert(element);
            }
        }

        for(auto i : temp){
            ans.push_back(i);
        }
            
        return ans;
        
    }
};
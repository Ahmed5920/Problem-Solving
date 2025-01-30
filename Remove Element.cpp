class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> vec;
        int k =0;
        for(int i =0;i<nums.size();i++){
            if(val != nums[i]){
                vec.push_back(nums[i]);
                k++;
            }
        }
        nums = vec;
        return k;
    }
};

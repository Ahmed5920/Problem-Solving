class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> vec;
        if(nums.size()==0){
            return 0;
        }
        vec.push_back(nums[0]);
        for(int i =1;i<nums.size();i++){
            if(nums[i] == vec.back()){
                continue;
            }
            else{
                vec.push_back(nums[i]);
            }
        }

        nums = vec;
        return(vec.size());
    }
};

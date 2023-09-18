class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int n = nums.size();
        vector<int> temp;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                temp.push_back(nums[i]);
            }
        }
         int size = temp.size();
         for (int i = size; i < nums.size(); i++) {
            temp.push_back(0);
        }
        for (int i = 0; i < n; i++) {
            nums[i] = temp[i];
        }
    }
};

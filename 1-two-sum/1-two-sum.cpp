class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        bool check = false;
        
        int a, b;
        for (int i=0; i<nums.size(); i++)
        {
            for (int j=i+1; j<nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    a = i;
                    b = j;
                    check = true;
                    break;
                }
            }
            if (check)
            {
                break;
            }
        }
        
        return {a, b};
    }
};
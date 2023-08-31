class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int left = 0 , ryt = nums.size() - 1 , mid ;
        while(left <= ryt)
        {
            mid = (left + ryt) / 2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                ryt--;
            else
                left++;
        }
        return -1;
        
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        map<int, int>mp;
        for(int i = 0 ; i < numbers.size() ; i++)
            mp[numbers[i]]++;
        for(int i = 0 ; i < numbers.size() ; i++)
        {
            int a = target - numbers[i];
            if(mp[a])
            {
                for(int j = i + 1 ; j < numbers.size() ; j++)
                {
                    if(numbers[j] == a)
                    {
                        return {i+1 , j+1};
                    }
                }
            
            }
        }
        return {-1};
    }
};
class Solution {
public:
    vector<int> check;
    bool isHappy(int n) 
    {
        int sum = 0;
        while(n != 0)
        {
            sum = sum + ((n % 10) * (n % 10));
            n /= 10;
        }
        auto it = find(check.begin(), check.end(),sum);
        if(it != check.end())
            return false;
        check.push_back(sum);
        if(sum == 1)
            return true;
        return isHappy(sum);
    }
};
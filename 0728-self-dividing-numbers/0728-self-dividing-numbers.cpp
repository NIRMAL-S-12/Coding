class Solution {
public:
    
    bool fun(int n)
    {
        int t = n;
        int flag = 0;
        while(n != 0)
        {
            int r = n % 10;
            if(r != 0 && t % r == 0 )
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
            n /= 10;
        }
        if(flag == 1)
        return true;
        return false;
    }
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> v;
        for(int i = left ; i <= right ; i++)
        {
            if(fun(i))
            {
                v.push_back(i);
            }
        }
        return v;
        
    }
};
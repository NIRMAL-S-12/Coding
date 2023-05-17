class Solution {
public:
    int countDigits(int num) 
    {
        int k = 0, t = num;
        while(num != 0)
        {
            if(t % (num % 10) == 0)
            {
                k++;
            }
            num /= 10;
        }
        return k;
        
    }
};
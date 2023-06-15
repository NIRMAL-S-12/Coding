class Solution {
public:
    int countPrimes(int n) 
    {
        // sieve of eratosthenes alogirhtm to find prime numbers
        int prime[n+1];
        memset(prime, 0, sizeof(prime));
        for(int i = 2 ; i <= n ; i++)
        {
            if(prime[i] == 0)
            {
                for(int j = i * 2 ; j <= n ; j+=i)
                {
                    prime[j] = 1;
                }
            }
        }
        int ans = 0;
        for(int i = 2 ; i < n ; i++)
        {
            if(prime[i] == 0)
                ans++;
        }
        return ans;
    }
};
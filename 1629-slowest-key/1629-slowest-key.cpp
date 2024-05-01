class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) 
    {
        char ans = keysPressed[0];
        
        int max = releaseTimes[0];
        for(int i = 1 ; i < releaseTimes.size() ; i++)
        {
            int b = releaseTimes[i] - releaseTimes[i - 1];
            cout<<b<<endl;
            if(b == max)
            {
                max = b;
                if(ans < keysPressed[i])
                    ans = keysPressed[i];
            }
            else if(b > max)
            {
                max = b;
                ans = keysPressed[i];
            }
        }
        return ans;
    }
};
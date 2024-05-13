class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int j = 0 ;
        for(int i = 0 ; i < haystack.size() ; i++)
        {
            int k = i;
            j = 0;
            while(j < needle.size() && k < haystack.size() && needle[j] == haystack[k] )
            {
                j++;
                k++;
                if(j == needle.size())
                    return i;
            }
        }
        return -1;
        
    }
};
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) 
    {
        set<string> ans;
        for(auto i : emails)
        {
            int idx = -1, k;
            for(k = 0 ; i[k] != '@' ; k++);
            int j = 0;
            string s = "";
            for(j = 0 ; i[j] != '@' ; j++)
            {
                if(i[j] == '.')
                    continue;
                else if(i[j] == '+')
                {
                    break;
                }
                else
                {
                    s += i[j];
                }
            }
            for(int l = k ; l < i.size() ; l++)
                s += i[l];
            ans.insert(s);
        }
        return ans.size();
    }
};
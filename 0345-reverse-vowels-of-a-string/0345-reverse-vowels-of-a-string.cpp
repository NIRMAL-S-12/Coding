class Solution {
public:
    
    int isvow(char ch)
    {
        ch = tolower(ch);
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    string reverseVowels(string s)
    {
        int front = 0 , end = s.size() - 1;
        while(front < end)
        {
            if(isvow(s[front]) && isvow(s[end]))
            {
                char ch = s[front];
                s[front] = s[end];
                s[end] = ch;
                front++;
                end--;
            }
            else if(isvow(s[front]))
            {
                end--;
            }
            else{
                front++;
            }
        }
        return s;
        
    }
};
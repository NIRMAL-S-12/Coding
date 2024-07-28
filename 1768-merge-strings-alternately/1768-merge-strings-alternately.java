class Solution {
    public String mergeAlternately(String word1, String word2) 
    {
        String s = "";
        int len = word1.length() < word2.length() ? word1.length() : word2.length();
        for(int i = 0 ; i < len ; i++)
        {
            s += word1.charAt(i) +""+ word2.charAt(i);
        }
        for(int i = len ; i < word1.length() ; i++)
            s += word1.charAt(i);
        for(int i = len ; i < word2.length() ; i++)
            s += word2.charAt(i);
        
        return s;
        
    }
}
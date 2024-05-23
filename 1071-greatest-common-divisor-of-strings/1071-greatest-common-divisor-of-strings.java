class Solution {
    
    public int hcf(int a, int b)
    {
        if(b == 0)
            return a;
        return hcf(b, a%b);
    }
    public String gcdOfStrings(String str1, String str2) 
    {
        int n = str1.length(), m = str2.length();
        int gcd = hcf(n,m);
        if((str1 + str2).equals(str2 + str1))
        return str1.substring(0,gcd);
        return "";
    }
}
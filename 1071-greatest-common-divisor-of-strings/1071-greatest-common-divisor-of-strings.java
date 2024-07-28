class Solution 
{
    int gcd(int a, int b)
    {
        if(b == 0)
            return a;
        return gcd(b , a%b);
    }
    public String gcdOfStrings(String str1, String str2) 
    {
        int len1 = str1.length(), len2 = str2.length();
        int hcf = gcd(len1, len2);
        System.out.println(hcf);
        if((str1 + str2).equals(str2 + str1))
        return str1.substring(0,hcf);
        return "";
    }
}
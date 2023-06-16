class Solution {
    public String reverseWords(String s) 
    {
        s = s.strip();
        String res[] = s.split(" ");
        String r = "";
        for(int i = 0 ; i < res.length ; i++)
            System.out.println(res[i].length());
        for(int i = res.length - 1; i > 0 ; i--)
        {
            // int check = 0;
            // for(int j = 0 ; j < res[i].length() ; j++)
            // {
            //     if(res[i].charAt(j) == ' ')
            //     {
            //         System.out.println("ji");
            //         check = 1;
            //     }
            //     else
            //     {
            //         check = 0;
            //         break;
            //     }
            // }
            // if(check == 0)
            // {
            //     r += res[i];
            //     r += ' ';
            // }
            if(res[i].length() == 0)
                continue;
            else
                r += res[i];
                r += ' ';
        }
        r += res[0];
        return r;
        
    }
}
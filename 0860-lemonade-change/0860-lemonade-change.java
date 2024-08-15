class Solution {
    public boolean lemonadeChange(int[] bills) 
    {
        int five = 0 , ten = 0 , tw = 0;
        for(int i = 0 ; i < bills.length ; i++)
        {
            if(bills[i] == 5)
                five++;
            else if(bills[i] == 10)
                ten++;
            else
                tw++;
            
            if(bills[i] == 10)
            {
                if(five > 0)
                five--;
                else
                    return false;
            }
            else if(bills[i] == 20)
            {
                if(ten > 0)
                {
                    ten--;
                    if(five > 0)
                    five--;
                    else
                        return false;
                }
                else if(five >= 3)
                {
                    five -= 3;
                }
                else
                    return false;
            }
            
        }
        return true;
    }
}
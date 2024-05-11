class Solution {
public:
    int sumFourDivisors(vector<int>& nums) 
    {
        int sum =0;
      for(int num : nums){
          int divsorSum = 1+ num;
      
     int count = 2;
      for( int i = 2 ; i <= num / 2 && count <= 4 ;i++){
          if(num %i == 0 ){
              divsorSum +=i;
              count++;
          }
          }
          if(count == 4){
            sum += divsorSum;
          }
      }
      return sum;
    }
};
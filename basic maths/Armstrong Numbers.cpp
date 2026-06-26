/*An Armstrong number of three digits is a number such that the sum of the cubes of its digits is equal to the number itself. 371 is an Armstrong number since 33 + 73 + 13 = 371. 

Examples:

Input: n = 153
Output: true
Explanation: 153 is an Armstrong number since 13 + 53 + 33 = 153. */
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int rv = n;
        int ans ;
        while (n>0){
            int ld = n%10;
            ans = ans+(ld*ld*ld);
            n = n/10;
            
            
            
        }
    return rv == ans ; //done mistake while solving 
        
        
    }
};
/*Given a number n, return the count of digits in this number.

Examples :

Input: n = 1567
Output: 4
Explanation: There are 4 digits in 1567, which are 1, 5, 6 and 7.
Input: n = 99999
Output: 5
Explanation: Number of digit in 99999 is 5*/

/*approch 
we will num = num/10 and update the count until it become zerow */

/*code*/
class Solution {
  public:
    int countDigits(int n) {
        // Code here
        int count = 0;
        while (n>0){
            n = n /10;S
            count = count +1 ;
            
        }
    return count;
    }
};
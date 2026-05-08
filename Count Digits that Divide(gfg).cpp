/*Given a positive integer n, count the number of digits in n that divide n evenly (i.e., without leaving a remainder). Return the total number of such digits.

A digit d of n divides n evenly if the remainder when n is divided by d is 0 (n % d == 0).
Digits of n should be checked individually. If a digit is 0, it should be ignored because division by 0 is undefined.

Examples :

Input: n = 12
Output: 2
Explanation: 1, 2 when both divide 12 leaves remainder 0.
Input: n = 2446
Output: 1
Explanation: Here among 2, 4, 6 only 2 divides 2446 evenly while 4 and 6 do not.
Input: n = 23
Output: 0
Explanation: 2 and 3, none of them divide 23 evenly.
Constraints:
1<= n <=106*/

/*approch 
we will take size as zerow and an dublicate num = n
find last digit by n%10 and update num n/10
find wether the num is divisble by the last digit
if dub%lastdigit == 0 so we will increase size by 1
and at the end return the size */

/*code */
class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int sz = 0;
        int dub = n;
        while(n>0){
            int dig;
            dig = n%10 ;
            n = n/10;
            if (dig == 0){ //prevent from runtime error(mistake)
                continue ;
            }
            if(dub%dig == 0){
                sz = sz+1;
            }
        }
    return sz ;
    }
};

/*mistake
the edge case if the last dig will become zerow will throw runtiem error because n/0 = infinity */
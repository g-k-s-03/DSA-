/*Given an integer x, return true if x is a palindrome, and false otherwise.





Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.*/

/*appeoch
we will use basic math in which first we will
1. take the last disgit of the num by lastdig = num%10]
2. then the pnum = 0
3. and update the pnumber by pnum = (pnume*10)+lasdig
4. ans then reducr the original num by x= x/10 */

/*code */
class Solution {
public:
    bool isPalindrome(int x) {
       if (x<0) return false;
       long long revnum = 0;
       int dub = x ;
       while(x>0){
        int ldigit = x%10;
        revnum = (revnum*10)+ldigit ;
        x = x/10;
       }
    return revnum == dub;
        
    }  
};

/*mistake
1. forgot that if any number multiply by 10 i can exeed the int limit so we will use long long 
2. didnot update the munber by x= x?10*/


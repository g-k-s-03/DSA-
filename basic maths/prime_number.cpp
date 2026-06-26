/*Given a number n, determine whether it is a prime number or not.
Note: A prime number is a number greater than 1 that has no positive divisors other than 1 and itself.

Examples :

Input: n = 7
Output: true
Explanation: 7 has exactly two divisors: 1 and 7, making it a prime number.*/

/*approch :- 
we will check if the number has any divisors other than 1 and itself. we know that the number i prime if its is divisible by other number 
and the fectors of the number should lie between 2 and sqrt(n) 
squrt beacuse after sqrt(n), the factors repeat */

/*code*/
class Solution {
  public:
    bool isPrime(int n) {
        // code here
        if (n <= 1) return false ;
        
        int i = 2; 
        while(i*i<=n){
            if (n%i==0){
                return false;
                
            }
            i++;
        }
        return true;
        
    }
};
/*mistake - started i from 1 and also dont know bout that sqrt methord just doing brute force*/
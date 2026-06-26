/*problem Given two integers a and b, You have to compute their LCM and GCD and return an array containing their LCM and GCD.

Examples:

Input: a = 5 , b = 10
Output: [10, 5]
Explanation: LCM of 5 and 10 is 10, while their GCD is 5.*/

/*approch
we will use the formula LCM(a,b) = (a*b)/GCD(a,b) to find the LCM of a and b. 
we will find the GCD of a and b using the Euclidean algorithm, which is an efficient method for computing the greatest common divisor of two numbers. 
The algorithm is based on the principle that the GCD of two numbers also divides their difference.
We will repeatedly replace the larger number with the remainder of the division until one of the numbers becomes zero.
The non-zero number at this point will be the GCD of a and b. Finally, we will return an array containing the LCM and GCD. 
no need to find which number is larger and which is smaller because the algorithm works for any order of the numbers. ex:- 15 % 20 = 15, 20 % 15 = 5, answer is 5*/


/*  code*/






/*miatske*/
/*I used the wrong loop condition.
I wrote while(d > e).
The Euclidean Algorithm should continue until the remainder becomes 0.
The correct condition is while(e != 0).
I assumed the larger number must always be the dividend.
In the Euclidean Algorithm, I don't need to manually decide which number is larger.
The algorithm automatically adjusts the numbers after the first iteration.
I treated e as the GCD after the loop.
When the loop ends, e becomes 0.
The GCD is stored in d, which is the last non-zero value.
I used e in the LCM formula.
I wrote lcm = (a * b) / e.
Since e becomes 0, this would lead to division by zero.
The correct formula is lcm = (a * b) / gcd, where gcd = d.
I tried to return both GCD and LCM using return e, lcm.
A normal C++ function cannot return two values this way.
I need to return one value or use a pair/struct if both are required.*/
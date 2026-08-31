/*
maths for dsa : 
1) prime no :
- prime or not 
*/

#include<iostream>
using namespace std;

//brute force approach : O(n)
bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}



/*
2)count primes : 
- https://leetcode.com/problems/count-primes/description/
- if we do this question like the above question then it will exceed time limit for bigger values of n
- now new approach : 
    sieve of eratosthenes - remove 1 and n 
    - now after 1 comes the 2 and 2 is a prime no so 2 ke aage sare multiples non prime honge jaise 4,6,8,.. un sabko remove krdo
    - aise hi 3 prime hoga and 3 ke multiples 6,9,12,.. sare non prime honge
    - lect24-1
- O(n*log(logn))
*/

int countPrime(int n){
    vector<bool> prime(n+1, true);
    int count = 0;

    prime[0]=prime[1]=false;
    for(int i=2 ; i<n ; i++){
        if(prime[i]){
            count++;
            for(int j =i*2 ; j<n ; j++){
                prime[j]=false;
            }
        }
    }
    return count;
}


/*
HW : segmented sieve
*/



/*
GCD/HCF : 
- The largest positive integer that divides two numbers exactly (i.e., no remainder).
- lect24-2
- Euclidean : gcd(a,b) = gcd(a-b,b) = gcd(a%b,b)
- or direct use : 
    #include <numeric>
    gcd(a, b)
*/

int gcd(int a,int b){
    if(b==0)    return a;
    return gcd(b, a%b);
}
/* eg : gcd(48, 18) → gcd(18, 48 % 18) → gcd(18, 12)
gcd(18, 12) → gcd(12, 6)
gcd(12, 6) → gcd(6, 0)
→ return 6 */


/*
LCM :
- formula : LCM(a, b) = (a * b) / GCD(a, b)
*/

int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}



/*
modulo : 
- lect24-3
*/

/*
fast exponentiation :
- a^b O(b)
- lect24-4
- O(logb)
- question : modular expansion : 
    - (X^N) % M
    - https://www.naukri.com/code360/problems/modular-exponentiation_1082146
*/
int modularExpansion(int x, int n, int m){
    int result = 1;
    int base = x%m;
    while(n>0){
        if(n%2==1){
            result = (result*base)%m;
        }
        base = (base*base)%m;
        n=n/2;
    }
    return (int)result;
}


/*
Hw : 
- pigenhole principle
- catalan number
- inclusion exclusion principle
- factorial of a number using %
*/
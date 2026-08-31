//Power of two : 
// https://leetcode.com/problems/power-of-two/description/
#include<iostream>
using namespace std;

bool isPowerOfTwo(int n){
    //iterative approach :
    if(n<=0)    return false;

    while(n>1){
        if(n%2 != 0)    return false;
        n = n/2;
    }
    return true;
}

bool isPowerOfTwo(int n){
    //bitwise trick : 
    return n>0 && (n&(n-1)) == 0;

    //step 1 : check kr rha hai ki n positive hai kya
    //step 2 : check kr rha hai ki agar koi no. 2 ki power mein hai toh uski bit m bus ek hi bit set hoti hai(1).
    //see pic 1.
    //n-1 se jo 1 ke baad sari bits hai voh 1 ho jyngi..see pic 1
    //toh jab hum n & n-1 krnge toh & operartion 0 aayega
}
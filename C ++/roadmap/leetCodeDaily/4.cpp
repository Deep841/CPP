//range product quries of powers : 
// https://leetcode.com/problems/range-product-queries-of-powers/?envType=daily-question&envId=2025-08-11
#include<iostream>
using namespace std;

/*
- subse phle problem m powers array niklnge 
    ab n = 15 h toh :
    issme powers = [2^0, 2^1, 2^2, 2^3] = [1,2,4,8] aur inn sbka sum = 15 
    ab queris = [(0,1), (2,2), (0,3)] iska mtlb : 
    O/P = [2, 4, 64] yeh h ki querries ke 0 se 1 tk ka product powers vle arrays ke elts ka i.e. 1*2 = 2...
    aur (2,2) ka mtlb powers vle array ke 2nd elt se lekr 2nd elt tk ka product i.e. 4
    aur (0,3) ka mtlb powers vle array ke 0th elt se lekr 3rd elt tk ka product i.e. 1*2*4*8 = 64

    ab powers vla array kese laye ?
    jo n diya hua h...uska binary rep. of n(jo hum 2 ki power smthng krte the ...power inc hoti thi from R to L) hai hai powers array...see pic 2
    then sorted order m krna powers vale array ko.

    now to check if ith bit is set or not :
    if(n & (1<<i) != 0){
        powers.push_back(1<<i);
    }

    fir bus ek for loop lga denge i = 0 to 31...aur iske ander bhi same upr vali if condition laga denge 

- 1<<i = pow(2,i)

- now some things : 
const int M = 1e9 + 7; it is a modulus constant and a prime number, overflow ke risk se bachne ke liye, 

int start = querries ek 2d array hai 	
•	queries ek 2D vector hai — har query me do integers hote hain.
	•	query[0] → starting index of range
	•	query[1] → ending index of range
*/
/*
find median sorted array
- https://leetcode.com/problems/median-of-two-sorted-arrays/

-Approach ka Idea : 
Binary Search chhote array par karke dono arrays ka partition find karte hain, jisse:
	•	Left partition me exactly (total+1)/2 elements hon
	•	Right partition me baaki elements hon
	•	Left partition ka sabse bada element ≤ Right partition ka sabse chhota element

Jab yeh condition mil jaati hai → median directly calculate kar sakte ho.

-step 1: 
    isme yeh krnge ki 2 array bnynge A,B copy of 2 given arrays 
    aur isme A vle array ko chota rkhnge ...swap vla logic use kr ke

-step 2: 
    ab dono array ke size ka total nikala
    aur uska half krdiya = int half = (total + 1) / 2;

-step 3 : 
    yha humne l=0 , r = A.size() kiya 
    fir ek while loop chlya l<=r ...basically binary search vli approach use kiya 

    then yeh kiya : 
    int l = 0, r = A.size();
while (l <= r) {
    int i = (l + r) / 2;
    int j = half - i;

-step 4 :
    uske baad borders nikle : 
    •	Aleft  → A ka left ka last element
	•	Aright → A ka right ka first element
	•	Bleft  → B ka left ka last element
	•	Bright → B ka right ka first element
	•	Agar koi side empty hai, toh INT_MIN / INT_MAX use karke boundaries handle karte hain.

-step 5 :
    check partiton condition : 
    ki A array ka subse bada elt chota ho b je 

-step 6 :
    median calculate kiya 
    agar odd hai toh return kr denge Aleft, Bleft mse se maximum
    Odd → middle element
    Even → average of two middle elements

-step 7 : 
    adjust search range
    Left side ka max bada → A ka partition left me shift karo
    
*/
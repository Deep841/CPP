/*Time complexity , Space complexity 
see lect11-1 

Time complexity : it is the amount of time taken by an algorithm to run as a function of length pf I/P
                : Time complexity tells us how the execution time of an algorithm increases with the size of input (n)
                : How long will this code take as data gets bigger?
            why : for making better programs 
            why : for comaparision of algos
      notations : 3 types - Big O notation (upper bound), Theta θ (for avg case complexity), Omega Ω (lower bound)
                : see till lect11-9
                : now questions lect11-10
observations from ques : lower degree ko ignore, constants ko ignore (see lect11-11,12,13)
now codes ki dekhnge time complexities : printArray vle function m time complexity O(n) kyuki n baar loop chla tha
                                       : reverseArray m n/2 baar swaps kiye h...mtlb time complexity O(n)
                                       : linearSearch m n baar comparisions ...O(n)
                          lect11-14,15 : agar for loop ke ander ek aur for loop then O(nxm), agar for loop khtm hone ke baad ek aur for loop then O(n+m)
                             lect11-16 : O(n^2 + m) = O(n^2) ans
                             lect11-17 : humesha worst case uthna h O(nxn)
                   10^8 operation rule : most modern machines can perform 10^8 operation/sec 

Space complexity : kitni memory ek algo ek algo legi
                 : Space complexity tells us how much memory (RAM) an algorithm uses based on input size.
                 : int a , int b ... asie variables ki space complexity O(1)
                 : int arr[5]... agar fixed size ka array toh bhi space complexity O(1)
                 : I/P = n ... arr[n] ... ab terminal se lenge n = ? aise questions m space complexity O(n)
                 : for loop space complexity m memory ni leta h...
       lect11-19 : O(n) hi hogi space complexity m matter ni krta for loop and sirf arr[n] se space complexity O(n) aati hai
       
*/
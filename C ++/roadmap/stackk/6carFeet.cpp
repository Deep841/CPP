/*
car feet : 
- https://leetcode.com/problems/car-fleet/description/
- 17, 18
- car fleet mtlb 2 car takra jyngi ek sath ... and voh fir same speed se jyngi
- sidha dekh lenge ki cars kitne tym m target tak phoch rhi hai agar (sorted order m car kr lenge phle)
    agar pichli vli car agli vli car se phle phoch rhi h i.e. car fleet
    ab remove kese krnge ek car ko after car fleet...
    we will start from the right to the left
    so jo subse right pe hogi car..car fleet m usko rakh lenge ..left vli ko neglect
- 19, 20
- Goal: Find out how many car fleets will arrive at the target.
- O(nlogn)  time
- O(n)  space
- NOTE : 
    sort(vec.begin(), vec.end())    means  Ascending
    sort(vec.begin(), vec.end(), greater<>())   means   Descending


*/


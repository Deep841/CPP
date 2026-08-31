//Binary search problems : 
//Square root using binary search
//method - 1 : Brute force approach - ek ek kr ke Natural numbers ka square nikle aur usse compare kre give number se...O(√ n)...lect14-6

/*
method - 2 : Search space - jiss range m answer lie krta h...lect14-7
           : https://leetcode.com/problems/sqrtx/

*/
class Solution {
public:
    long long int mySqrt(int x) {
        int start = 0 , end = x;
        int ans = -1;
        while(start<=end){
            long long int mid = start + (end - start)/2;
            long long int sq = mid*mid;
            if(sq>x){
                end = mid-1;
            }
            else if(sq<x){
                ans = mid;
                start = mid +1;
            }
            else{
                return mid;
            }
        }
        return ans;
    }
};
// ab upr vle question m glti hai ki what if mid*mid ek bohot bada number bn jye...bus mid, start vle int ko long long int bna do.
// ab yha pe ek problem thi ki root ke baad vli value jaise .12 (mtlb decimal values ni aa rhi O/P m)...yha pe brute force technique aaygi..lect14-8
//lect14-9
double morePrecisious(int n, int precious, int tempsol){
    double factor = 1;
    double ans = tempsol;
    for(int i=0; i<precious ; i++){
        factor = factor/10;
        for(double j = ans; j*j<n ; j=j+factor){
            ans=j;
        }
    }
    return ans;
}

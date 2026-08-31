/*
Binary seatrch problems : 
Book allocation problem : sari book allocate krni h
                        : harr student ko book milni h
                        : aur book allocation contigous manner m krni h
                        : see lect15-1 pic
                        : such that maximum number of pages assigned to a student is minimum.
        steps           : phle number of book allocate krne ke tarike dekhne hai see lect15-2, 2.2
                        : fir dekhna hai ki number of pages ka maximum kya kya h
                        : aur uss husab se pages(books) deni hai taki number of pages mini rhe..mtlb max jiska sub se kum
                        : see lect15-3, 3.2, 
       no solution case : m=2 pe mid=50 pe solution nhi bna pa rha toh number line m 0to50 pe bhi solution ni bna pynge iss liye start = mid+1
       solution exists  : mid=75 ab yeh ek possible solution hai toh iske right m check ni krnge ..ab 75 ke right m check krnge end=mid-1 lect15-3.3 
        range           : 0 to 100... then 51 to 100... then 51 to 74... then 51 to 61... then 57 to 61... then 60 to 62... then 
                        : range se mid niklnge then books dete rhnge contigous manner m such that no. of pages <=mid se lect15-3.4 
                        : lect15-3.5, 3.6, 3.7, 3.8, 

*/
#include<iostream>
#include<vector>
using namespace std;

//this below solution had problems in runtime
// bool isPossibleSolution(vector<int>&arr, int n, int m, int mid){
//     int studentCount = 1;
//     int pageSum = 0;
//     for(int i = 0 ; i<n ; i++){
//         if(pageSum + arr[i]<=mid){
//             pageSum+=arr[i];
//         }
//         else{
//             studentCount++;
//             if(studentCount<=m || arr[i]>mid){
//                 return false;
//             }
//             pageSum=arr[i];
//         }
//     }
//     return true;
// }

// int findPages(vector<int>& arr, int n, int m) {
//     if(m > n) return -1; // Not enough books to give each student


//     int start = 0;
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum+=arr[i];
//     }
//     int end = sum;
//     int pageSum = 0;
//     int ans = -1;
//     while(start<=end){
//         int mid = start + (end-start)/2;
//         if(isPossibleSolution(arr,n,m,mid)){
//             ans = mid;
//             end = mid - 1;
//         }
//         else{
//             start = mid + 1;
//         }
//     }
//     return ans;
// }
//this above solution had problems in runtime

bool isPossibleSolution(vector<int>& arr, int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
    
    for(int i = 0 ; i<n ; i++){
        if(arr[i]>mid){
            return false;
        }
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m){
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int>& arr, int n, int m){
    //not enough books : 
    if(m>n){
        return -1;
    }

    int start = 0;
    int sum = 0;
    //end ke liye sare pages ka sum niklnge : 
    for(int i=0; i<n ; i++){
        sum += arr[i];
        start = max(arr[i],start);//for better optimization
    }
    int end = sum;

    int ans = -1 ;
    while(start<=end){
        int mid = start + (end-start)/2;

        if(isPossibleSolution(arr,n,m,mid)){
            ans = mid;
            end = mid - 1;  //piche aa rhe h...trying for smaller max
        }
        else{
            start = mid + 1;  //aage ja rhe h...trying for larger max
        }
    }
    return ans;
}

int main(){
    vector<int> books = {12, 34, 67, 90};
    int students_m = 2;
    int n = books.size();

    int result = allocateBooks(books, n, students_m);
    cout << "Minimum of the maximum number of pages: " << result << endl;


    return 0;
}
/*
Time Complexity : O(n * log(sum)) — where sum is the sum of all pages
*/

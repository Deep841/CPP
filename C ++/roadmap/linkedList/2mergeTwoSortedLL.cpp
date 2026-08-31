/*
21. Merge Two Sorted Lists
- https://leetcode.com/problems/merge-two-sorted-lists/
- recurssion use krnge :
    base case ki agar ek head null h toh dusre ka head return krdo
    if-else case bnye ki agar ek ke head->val dusre se kum hai toh
    head->next pe function recall krdenge aur parameter m head1->next,head2
- O(n+m) both
*/

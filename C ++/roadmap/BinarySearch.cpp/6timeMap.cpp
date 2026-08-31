/*
981. Time Based Key-Value Store
- https://leetcode.com/problems/time-based-key-value-store/description/

- phle ek unordered_map bnynge jisme <string , map<int,string>> ... <key , <timestamp,value>>
   * example : 
    set("foo", "bar", 1)
    set("foo", "bar2", 4) 
   * map will be : 
    "foo" → [ {1,"bar"}, {4,"bar2"} ]
- fir timemap vle constructor ko khali shod denge 
- fir set function jisme map ki key pe timestamp aur value baal denge 
- ab get function bnynge 
    Agar key exist nahi karti, return empty string i.e. return "";
    ek key ka refernce vector hai vec ..aur.. ans empty rakha kyun ki agar koi time stamp match na hua toh blank return krnge

    ab main goal : Largest timestamp ≤ given timestamp dhundna.
    

*/
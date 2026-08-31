//STL - containers - associative container - set, map, multiset, multimap

#include<iostream>
using namespace std;
#include<set>
#include<map>

int main(){

/*
Set : all elts will be unique (maths vla set)
    : no modifications only add or delete
    : elts return in sorted order
*/

    set<int> s_set_vala;
    s_set_vala.insert(5);
    vector<int> set_ke_liye={3,5,1,5,0};

    for(int i : set_ke_liye){
        s_set_vala.insert(i);
    }

    cout<<"set elts : ";
    for(auto i : s_set_vala){
        cout<<i<<" ";
    }cout<<endl;

    set<int> :: iterator it = s_set_vala.begin();
    s_set_vala.erase(it);

    cout<<"set elts : ";
    for(auto i : s_set_vala){
        cout<<i<<" ";
    }cout<<endl;

    //to check if any elt is present or not = count()
    cout<<"5 present ? : "<<s_set_vala.count(5)<<endl;

    set<int>::iterator itr = s_set_vala.find(5);
    cout<<endl;
/*
Map : data is sotred in key,value form
    : 1 key will only point 1 value at a tym
    : 2 keys can point to same values
    : no gurantee of sorted order
    : O(logn)

*/
    cout<<"map..."<<endl;

    map <int, string> m;

    m[1] = "yo1";
    m[2] = "yo2";
    m[82] = "yo82";
    m[31] = "yo31";
    //or
    m.insert({143, "us"});

    cout<<"map elts : "<<endl;
    for(auto i : m){
        cout<<i.first<<"  "<<i.second<<endl;
    }

    //count, erase, find

//conatiners - unordered containers - unordered map, unordered set, unordered multiset, unordered multi map

}
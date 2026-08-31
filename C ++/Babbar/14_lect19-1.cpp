/*STL : Standard Template Library 
      : 2 types - algorithms and containers 
      :   algorithms - binary search, lower/upper bound, min/max, revserse/rotate, swap/sort.
      :   containers - sequence conatiners, containers adaptors, associative conatiners, unordered associative. 
see lect19-1 photo
*/

/* 
Sequenc conatiners : array, vector, deque, list, forward_list
Array : def
      : use #include<array>
      : STL vale array ki implimentation basic vale array se hi hoti h(mtlb STL vle array ki implementation fixed size ke static array se hi hoti h)
        toh mtlb STL vla array bhi static array hua issi liye usse hum cpp m isse use ni krte h.
*/
#include<iostream>
#include<array>
using namespace std;

#include<vector>
#include<deque>
#include<list>

int main(){
    cout<<"array..."<<endl;
    int basic[]={1,2,3,4};

    array<int,4> meow = {1,2,3,4};

    int size = meow.size();

    for(int i=0;i<meow.size();i++){
        cout<<meow[i]<<" ";
    }cout<<endl;

    cout<<"elt at 2nd index : "<<meow.at(2)<<endl;
    cout<<"empty or not : "<<meow.empty()<<endl;    //return bool 0=false , 1=true

    cout<<"first/front elt : "<<meow.front()<<endl;
    cout<<"last/back elt : "<<meow.back()<<endl;
    cout<<endl;

/*
Vector  : ek dynamic array hota h 
        : same as array ki contiguous memory location pe store ho rhi h cheeze
        : vector apna size double kr lega jab bhr jyega - jab size bhr jyega toh ek naya vector bnyega jiska size double hoga aur apni sari values
          uss naye vector m copy kr dega aur purane vector ko dump kr dega 
        : #include<vector>
        : size- mtlb abhi kitne elts h
        : capacity - mtlb total kitni memory allocated h
*/
    cout<<"vector..."<<endl;
    vector<int> v;
    cout<<"capacity : "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity : "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity : "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity : "<<v.capacity()<<" and ";//here capacity doubled (happened in previous steps also)
    cout<<"size : "<<v.size()<<endl;

    v.push_back(4);
    cout<<"capacity : "<<v.capacity()<<" and ";
    cout<<"size : "<<v.size()<<endl;

    v.push_back(5);
    cout<<"capacity : "<<v.capacity()<<" and ";
    cout<<"size : "<<v.size()<<endl;

    cout<<"element at 2nd index : "<<v.at(2)<<endl;
    
    cout<<"front : "<<v.front()<<endl;
    cout<<"back : "<<v.back()<<endl;

    cout<<"before pop : "<<endl;
    for(int i : v){
      cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();
    
    cout<<"after pop : "<<endl;
    for(int i : v){
      cout<<i<<" ";
    }
    cout<<endl;

    //clear krne pe size=0 , and capacity remians the same 
    cout<<"before clear size : "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size : "<<v.size()<<endl;

    vector<int> sher(5,1);  //5=size of the vector , 1=intialise all elements with 1
    cout<<"elts of sher : "<<endl;
    for(int i : sher){
      cout<<i<<" ";
    }
    cout<<endl;

    //agar ab sher ka copy vector bn na hai toh :
    vector <int> sher2(sher);
    cout<<"elts of sher2 : "<<endl;
    for(int i : sher){
      cout<<i<<" ";
    }
    cout<<endl;

/*
Deque : #include<deque>
      : def : A deque is a dynamic array that allows fast insertion and deletion from both front and back.
      : v.push_back(1, 2, 3); // ❌ INVALID
*/
    
    cout<<endl<<"deque..."<<endl;
    deque<int> d ;
    vector<int> d_ke_liye={1,2,3,4,5};

    for(int i : d_ke_liye){
      d.push_back(i);
    }

    for(int i : d){
      cout<<i<<" ";
    }cout<<endl;

    d.pop_front();
    cout<<"pop front : ";
    for(int i : d){
      cout<<i<<" ";
    }cout<<endl;

    d.pop_back();
    cout<<"pop back : ";
    for(int i : d){
      cout<<i<<" ";
    }cout<<endl;

    cout<<"elt at 1st index : "<<d.at(1)<<endl;

    cout<<"front : "<<d.front()<<endl;
    cout<<"back : "<<d.back()<<endl;

    cout<<"empty or not : "<<d.empty()<<endl;

    //now erase function, here we hv to wirte the range of elts to be deleted
    cout<<"before erase = ";
    cout<<"size : "<<d.size()<<", elts : ";
    for(int i : d){
      cout<<i<<" ";
    }cout<<endl;

    d.erase(d.begin(),d.begin()+1);

    cout<<"after erase = ";
    cout<<"size : "<<d.size()<<", elts : ";
    for(int i : d){
      cout<<i<<" ";
    }cout<<endl<<endl;

/*
differnce btw d.front()= and d.begin() SEE LECT19-2
d.front() : Returns the first element of the deque.
	        : Type: int (or the element type).
          :	Usage: When you want to get or modify the first value directly.

d.begin() : Returns an iterator pointing to the first element.
          : Type: deque<int>::iterator
	        : Usage: Used when:
          : You want to iterate over the deque.
	        : You want to use STL algorithms (e.g., sort, find, etc.)
*/

/*
List : std::list is a doubly linked list in STL.
     : can't use at()
     : #include<list>
*/

cout<<"list..."<<endl;

list<int> l ;
vector<int> l_ke_liye={5,4,3,2,1};
for(int i : l_ke_liye){
  l.push_front(i);
}

cout<<"elts : ";
for(int i : l){
  cout<<i<<" ";
}cout<<endl;

//push_back()
l.push_back(82);
cout<<"elts : ";
for(int i : l){
  cout<<i<<" ";
}cout<<endl;

//erase 
l.erase(l.begin());
cout<<"after erase = ";
cout<<"elts : ";
for(int i : l){
  cout<<i<<" ";
}cout<<endl;

cout<<"size of list : "<<l.size()<<endl;

list<int> l2(5, 100);
cout<<"elts : ";
for(int i : l2){
  cout<<i<<" ";
}cout<<endl;
}
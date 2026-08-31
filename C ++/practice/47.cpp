//reverse every word in a array of character 

#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<char> & ch, int start , int end){
    while(start<end){
        swap(ch[start++],ch[end--]);
    }
}

void reverseWords(vector<char> & ch){
    int n = ch.size();

    //phle array ko reverse kr denge 
    reverse(ch, 0, n-1);

    //revrese evry word...space..n..null character(\0)
    int start = 0 ;
    for(int i = 0 ; i<=n ; i++){
        if (i==n || ch[i]==' ')
        {
            reverse(ch,start,i-1);
            start = i+1;
        }
        
    }
}
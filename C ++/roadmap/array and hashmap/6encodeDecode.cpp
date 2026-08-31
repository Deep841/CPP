/*
endode decode : 
- no link
- phli approach toh yeh thi ki #(limiter) ka use krle encode krne ke liye ...
    fir uss # ki help se decode krle..but agar string m phle se # hua toh yeh kaam ni krega so...
    sidha no. of words ko count kr lete hai.
- 4#deep...isme 4 words hogye aur limiter
- 
*/

#include<iostream>
#include<vector>
using namespace std;

string encode(vector<string>& str){
    string encoded = "";

    for(string & s : str){
        encoded+= to_string(s.length())+ '#' + s;
    }
    return encoded;
}

vector<string> decode(string & encoded){
    int i = 0;
    vector<string> decoded;
    while(i<encoded.length()){
        int j = i;

        while(encoded[j]!='#')  j++;
        
        int len = stoi(encoded.substr(i, j - i));
        string word = encoded.substr(j+1,len);
        decoded.push_back(word);
        i=j+1+len;
    }
    return decoded;
}


int main() {
    vector<string> input = {"deep", "puruVuru", "yoo"};
    string enc = encode(input);
    cout << "Encoded: " << enc << endl;

    vector<string> dec = decode(enc);
    for(string s : dec){
        cout << s << endl;
    }
}



/*
NOTE : 
- & means pass-by-reference
- It allows the function to modify the original variable, not a copy.
- To avoid copying large data structures (like vectors or strings), making the code faster.
- 6
*/
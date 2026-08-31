//doubt : if pattern not found.

// basic algo  
// naive string matching algo
//time complexity O((n - m + 1)m)
//the overall time complexity is O(n × m)

#include<iostream>  //provides I/P-O/p functionalities (cin-cout) 
#include<string>    //provides string 
using namespace std;    //allows to use standard library feature without std :: prefix  

void naive_string_matcher(string t, string p){
    int n = t.length();
    int m = p.length();
    
    //ab text ke starting se lekr n-m length tk check krnge pattern exits or not.
    for(int s = 0; s <= n-m; s++){
        bool match = true; //assuming that match at current position
        
        //checking if the pattern matches at current position or not
        for(int i = 0; i < m; i++){ //i=m issi liye ni hua kyun ki loop i=0 se start hai
            if(p[i] != t[s+i]){   //checking if each character matches or not
                match = false;  //if not then break
                break;
            }
        }
        
        // This should be OUTSIDE the inner loop
        if(match){
            cout << "Pattern found with shift: " << s << endl;   //Shift means the starting index of the matching pattern in the text.
        }
    }
}

int main(){
    string t, p;
    
    cout << "Enter the text: ";
    getline(cin, t);
    
    cout << "Enter the pattern: ";
    getline(cin, p);
    
    naive_string_matcher(t, p);
    
    return 0;
}
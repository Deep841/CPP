/*
Character arrays and strings : 

-char : stores a single character 
-Strings: 1-D character Array 
        : need for string is to store multiple characters 
        : char ch[10];
        : if we put only boo in ch then there r 3 characters in ch then at last index i.e. after o(from boo) null character(\0) will be stored at 3rd index
-null character : used as a terminator which tells that where the string end in the array...and it is in the next block after string's last digit
                : ASCII value of this null character is zero
-NOTE : whenever we give spcae/tab/enter/newline to cin (via terminal) then cin stops execution
-lect22-1 : null character \0 jha bhi aagya uska mtlb rukjao like return
-NOTE : character array m need ni hai array ka size likhne ki ...kisi bhi fucntion m
*/
#include <iostream>
using namespace std;

// 1) Length of string : 
int getLength(char name[]) {
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

// 2) Reverse a string : https://leetcode.com/problems/reverse-string/submissions/1683084421/
void reverse(char name[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        swap(name[start++], name[end--]);
    }
}

/*
3) Check Palindrome : 
- h.w. (IN NEXT PART...) https://www.naukri.com/code360/problems/check-if-the-string-is-a-palindrome_1062633 
  NOTE : here in the link question it is given that its not case sensitive i.e. d and D both are treated as same
- lect22-2 : basic approach ki ek array m reverese kr ke daal de name vale array ko and 
  then ek for loop laga kr original array and reversed array ek lets ko compare kra de
  but this approach is space consuming
-palindrome is case sensitive ...deed is palindrom ...but Peep is not a palindrome
*/

bool checkPalindrome(char name[], int n){
    int start=0, end=n-1;
    while(start<end){
        if(name[start]!=name[end]){     //if we want to make it not case sensitive then if( toLowerCase( name[start] ) != toLowerCase( name[end] ) )
            return 0; //or return fasle;
        }

        start++;
        end--;
        
    }
    return 1;
}


/*
4) character to lower case : 
- A to a
*/
char toLowerCase(char ch){
    if(ch>='A' && ch<='Z'){
        ch = ch - 'A' + 'a';
        return ch;
    }
    return ch;
}

int main() {
    char name[100];

    cout << "naam : ";
    cin >> name;

    cout << "String entered is : " << name << endl;

    int len = getLength(name);
    cout << "Length of string : " << len << endl;

    if (checkPalindrome(name, len)) {
        cout << "is a palindrome." << endl;
    } else {
        cout << "NOT a palindrome." << endl;
    }

    reverse(name, len);
    cout << "Reversed string : " << name << endl;

    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    char lower = toLowerCase(ch);
    cout << "Lowercase: " << lower << endl;

    return 0;
}

/*
ASCII values:
	•	'A' (capital A) → 65
	•	'a' (small a) → 97
*/
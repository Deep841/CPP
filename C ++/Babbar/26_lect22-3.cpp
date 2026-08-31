/*------------ ALL FROM GPT ---------------
10)character array in-built functions : 
📌 Character Array vs C++ String Functions

------------------------------------------------------------------------
| Operation       | char[] (C-style)       | string (C++ STL)           |
------------------------------------------------------------------------
| Length          | strlen(charArray)      | str.length() / str.size()  |
| Compare         | strcmp(a, b)           | str1 == str2 / str1.compare(str2) |
| Copy            | strcpy(dest, src)      | str2 = str1                |
| Concatenate     | strcat(dest, src)      | str1 + str2 / str1.append(str2) |
| Substring       | ---                    | str.substr(pos, len)       |
| Find char       | strchr(str, ch)        | str.find(ch)               |
| Find substring  | strstr(str, substr)    | str.find(substr)           |
| Insert          | ---                    | str.insert(pos, "abc")     |
| Erase           | ---                    | str.erase(pos, len)        |
| Replace         | ---                    | str.replace(pos, len, "new") |
| To Lower/Upper  | tolower(ch)/toupper(ch)| manual via loop            |
-------------------------------------------------------------------------

✅ Include Required Headers:
- For char[]:     <cstring>, <cctype>
- For string:     <string>, <iostream>

📝 Tip: Prefer `string` in C++ for safer and cleaner code.
*/

#include <iostream>
#include <cstring>  // For strlen, strcpy, strcat, strcmp
#include <cctype>   // For tolower, toupper
#include <string>   // For C++ string

using namespace std;

int main() {

    // ==== C-style char array ====
    char ch1[100] = "Hello";
    char ch2[100] = "World";

    cout << "\n--- char[] (C-style string) ---\n";

    // Length
    cout << "Length of ch1: " << strlen(ch1) << endl;

    // Compare
    cout << "strcmp(ch1, ch2): " << strcmp(ch1, ch2) << endl;

    // Copy
    strcpy(ch1, ch2);
    cout << "After strcpy(ch1, ch2), ch1: " << ch1 << endl;

    // Concatenate
    strcat(ch1, "123");
    cout << "After strcat(ch1, \"123\"): " << ch1 << endl;

    // To lower
    cout << "Lowercase ch1: ";
    for (int i = 0; ch1[i] != '\0'; i++) {
        cout << (char)tolower(ch1[i]);
    }
    cout << endl;


    // ==== C++ string ====
    string s1 = "Hello";
    string s2 = "World";

    cout << "\n--- string (C++ STL) ---\n";

    // Length
    cout << "Length of s1: " << s1.length() << endl;

    // Compare
    cout << "s1 == s2? " << (s1 == s2 ? "Yes" : "No") << endl;

    // Copy
    s1 = s2;
    cout << "After s1 = s2: " << s1 << endl;

    // Concatenate
    s1 = s1 + "123";
    cout << "After s1 + \"123\": " << s1 << endl;

    // Substring
    cout << "Substring s1.substr(1, 3): " << s1.substr(1, 3) << endl;

    // Insert
    s1.insert(2, "XY");
    cout << "After insert: " << s1 << endl;

    // Erase
    s1.erase(2, 2);
    cout << "After erase: " << s1 << endl;

    // Replace
    s1.replace(0, 3, "Hi");
    cout << "After replace: " << s1 << endl;

    // Find
    size_t pos = s1.find("123");
    if (pos != string::npos)
        cout << "\"123\" found at index: " << pos << endl;
    else
        cout << "\"123\" not found.\n";

    return 0;
}
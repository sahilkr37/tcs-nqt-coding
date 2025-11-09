/*Problem Statement: "Given a string, check if the string is palindrome or not."  A string is said to be palindrome if the reverse of the string is the same as the string.

Examples:

Example 1:
Input: Str =  “ABCDCBA”
Output: Palindrome
Explanation: String when reversed is the same as string.

Example 2:
Input: Str = “TAKE U FORWARD”
Output: Not Palindrome
Explanation: String when reversed is not the same as string.*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);

    int i = 0;
    int j = str.size() - 1;
    while (i < j)
    {
        if (tolower(str[i]) != tolower(str[j]))
        {
            cout << "Not Palindrome";
            return 0;
        }
        i++;
        j--;
    }
    cout << "Palindrome";
    return 0;
}
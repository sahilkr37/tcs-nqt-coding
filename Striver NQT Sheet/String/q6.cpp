/*Problem Statement: Write a program to remove all characters from a string except alphabets in a given string.

Examples
Input: str = "take12% *&u ^$#forward”
Output: “takeuforward”
Explanation: All characters except alphabets are removed.

Input: str1 = “Java&C++"
Output: “JavaC”
Explanation: All characters except alphabets are removed.*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, ans;
    getline(cin, str);

    for (char c : str)
    {
        if (isalpha(c))
            ans.push_back(c);
    }
    cout << ans;
    return 0;
}

/*Problem Statement: Given two strings, write a program to remove characters from the first string which are present in the second string.

Examples
Input: str1 = “abcdef”, str2 = “cefz”
Output: “abd”
Explanation: The common characters in both strings are c, e, f.

Input: str1 = “xyzpw”, str2 = "lmno"
Output: “xyzpw”
Explanation: There are no common characters.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2, ans;
    cin >> str1;
    cin >> str2;

    // map<char, int> mp;
    unordered_set<char> mp;
    for (char c : str2)
    {
        // mp[c]++;
        mp.insert(c);
    }

    for (char c : str1)
    {
        if (!mp.count(c))
            ans.push_back(c);
    }
    cout << ans;

    return 0;
}
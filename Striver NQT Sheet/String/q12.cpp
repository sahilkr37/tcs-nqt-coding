/*Problem:  Given a string, print non-repeating characters of the string.

Examples:

Example 1:
Input: string = “google”
Output: l,e

Explanation: Non repeating characters are l,e.

Example 2:
Input: string = “yahoo”
Output: y,a,h
Explanation: Non repeating characters are y,a,h*/

#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    cin >> str;
    vector<int> freq(26, 0);

    for (int i = 0; i < str.size(); i++)
    {
        freq[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 1)
        {
            cout << char('a' + i) << " ";
        }
    }

    return 0;
}

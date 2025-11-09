/*Problem Statement: Given a string, write a program to remove all the whitespaces from the string.

Examples
Input:  str = “take U forward”
Output: "takeUforward"
Explanation: All the whitespaces are removed.

Input: str = “How are you doing”
Output: "Howareyoudoing"
Explanation: All the whitespaces are removed.*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, ans;
    getline(cin, str);

    for (char c : str)
    {
        if (c != ' ')
            ans.push_back(c);
    }
    cout << ans;

    return 0;
}
/*Problem Statement: Given a string, write a program to change every letter in the given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a)

Examples:

Example 1:
Input: string str = “abcdxyz”
Output: bcdeyza*/

#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str, ans;
    cin >> str;

    for (char c : str)
    {
        if (c == 'z')
            ans.push_back('a');
        else
            ans.push_back(char(c + 1));
    }

    cout << ans;
    return 0;
}
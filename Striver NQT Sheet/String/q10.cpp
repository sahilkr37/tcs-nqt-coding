/*Problem Description: Given a string, write a program to capitalize the first and last character of each word of that string.

Examples
Input: str = "take u forward is awesome"
Output: “TakE U ForwarD IS AwesomE”
Explanation: We get the result after capitalizing the first and last character of each word of a string.

Input: str = "I am a boy"
Output: "I AM A BoY"
Explanation: First and last letter of each word is capitalized.
            */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int n = str.size();
    if (str[0] != ' ')
        str[0] = toupper(str[0]);

    for (int i = 1; i < n; i++)
    {
        if (i == n - 1 || str[i + 1] == ' ')
            str[i] = toupper(str[i]);
        if (str[i] != ' ' && str[i - 1] == ' ')
            str[i] = toupper(str[i]);
    }
    cout << str;
    return 0;
}
/*Problem Statement: Given a String, write a program to remove vowels from the String.

Examples
Input: str = “take u forward”
Output: "tk  frwrd"
Explanation: All vowels are removed from the given String.

Input: str = “I am very happy today”
Output: "m vry hppy tdy"
Explanation: All vowels are removed from the given String.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    string ans;

    for (char c : str)
    {
        if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u')
            ans.push_back(c);
    }
    cout << ans;
    return 0;
}
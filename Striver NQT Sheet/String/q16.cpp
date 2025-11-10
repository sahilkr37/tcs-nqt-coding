/*Problem: Given a String, find the largest word in the string.

Examples:

Example 1:
Input: string s=”Google Doc”
Output: “Google”

Explanation: Google is the largest word in the given string.

Example 2:
Input: string s=”Microsoft Teams”
Output: “Microsoft”
Explanation: Microsoft is the largest word in the given string*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int ans = INT_MIN;
    int count = 0, endIndex = -1;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            if (count > ans)
            {
                ans = count;
                endIndex = i - 1;
            }
            count = 0;
        }
        else
            count++;
    }
    if (count > ans)
    {
        ans = count;
        endIndex = str.size() - 1;
    }

    string ansString;
    while (str[endIndex] != ' ' && endIndex >= 0)
    {
        ansString.push_back(str[endIndex]);
        endIndex--;
    }
    reverse(ansString.begin(), ansString.end());
    cout << ansString;
    return 0;
}

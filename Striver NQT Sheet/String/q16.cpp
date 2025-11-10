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

    int maxCount = INT_MIN;
    int count = 0, endIndex = -1;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            if (count > maxCount)
            {
                maxCount = count;
                endIndex = i - 1;
            }
            count = 0;
        }
        else
            count++;
    }
    if (count > maxCount)
    {
        maxCount = count;
        endIndex = str.size() - 1;
    }

    string maxCountString;

    maxCountString = str.substr((endIndex - maxCount) + 1, maxCount);

    // while (str[endIndex] != ' ' && endIndex >= 0)
    // {
    //     maxCountString.push_back(str[endIndex]);
    //     endIndex--;
    // }
    // reverse(maxCountString.begin(), maxCountString.end());
    cout
        << maxCountString;
    return 0;
}

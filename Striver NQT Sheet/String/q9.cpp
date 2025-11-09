/*Problem: Given a string, calculate the sum of numbers in a string (multiple consecutive digits are considered one number)

Examples:

Example 1:
Input: string = “123xyz”
Output: 123

Example 2:
Input: string = “1xyz23”
Output: 24*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int ans = 0;

    string fullNum;
    for (char c : str)
    {
        if (c >= '0' && c <= '9')
            fullNum.push_back(c);
        else
        {
            if (!fullNum.empty())
            {
                ans += stoi(fullNum);
                fullNum.clear();
            }
        }
    }

    if (!fullNum.empty())
        ans += stoi(fullNum);

    cout << ans;
    return 0;
}
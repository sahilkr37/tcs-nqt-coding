/*Problem Statement: Given a string, calculate the frequency of characters in a string.

Examples:

Example 1:
Input: takeuforward
Output: a2 d1 e1 f1 k1 o1 r2 t1 u1 w1
Explanation: Count of every character of string is printed.

Example 2:
Input: articles
Output: a1 c1 e1 i1 l1 r1 s1 t1
Explanation: Count of every character of string is printed.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    cin >> str;

    vector<int> arr(26, 0);
    for (int i = 0; i < str.size(); i++)
    {
        arr[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0)
        {
            cout << char('a' + i) << arr[i] << " ";
        }
    }

    return 0;
}

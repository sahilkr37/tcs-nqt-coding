/*Problem Statement: Given a string s, reverse the words of the string.

Examples:

Example 1:
Input: s=”this is an amazing program”
Output: “program amazing an is this”

Example 2:
Input: s=”This is decent”
Output: “decent is This”*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);

    stack<string> st;
    int begin = 0, i;
    for (i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            string s = str.substr(begin, i - begin);
            st.push(s);
            begin = i + 1;
        }
    }
    st.push(str.substr(begin, i - begin));

    string ans = "";
    while (st.size() > 0)
    {
        ans += st.top();
        ans += " ";
        st.pop();
    }

    cout << ans;
    return 0;
}
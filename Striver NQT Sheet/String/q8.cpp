/*Problem Statement: Given an algebraic expression, write a program to remove brackets from the algebraic expression.

Examples
Input: “a+((b-c)+d)”
Output: “a+b-c+d”
Explanation: Removed all the brackets from the algebric expression.

Input: “(((a-b))+c)”
Output: “a-b+c”
Explanation: Removed all the brackets from the algebric expression.*/

#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str, ans;
    getline(cin, str);

    for (char c : str)
    {
        if (c != '(' && c != ')')
            ans.push_back(c);
    }
    cout << ans;

    return 0;
}
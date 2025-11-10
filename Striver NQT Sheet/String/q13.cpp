/*Problem Statement: Given two strings, check if two strings are anagrams of each other or not.

Examples:

Example 1:
Input: CAT, ACT
Output: true
Explanation: Since the count of every letter of both strings are equal.

Example 2:
Input: RULES, LESRT
Output: false
Explanation: Since the count of U and T  is not equal in both strings.*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);

    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    string s1, s2;
    stringstream ss(str);
    getline(ss, s1, ',');
    getline(ss, s2, ',');

    vector<int> freq1(26, 0);
    vector<int> freq2(26, 0);
    for (int i = 0; i < s1.size(); i++)
    {
        freq1[s1[i] - 'a']++;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        freq2[s2[i] - 'a']++;
    }

    if (freq1 == freq2)
        cout << "true";
    else
        cout << "false";
    return 0;
}
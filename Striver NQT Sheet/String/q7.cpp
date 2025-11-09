/*Problem Statement: Reverse a String. Write a program that reverses a given string (in-place).*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);

    int i = 0, j = str.size() - 1;
    while (i < j)
    {
        swap(str[i], str[j]);
        i++;
        j--;
    }
    cout << str;
    return 0;
}
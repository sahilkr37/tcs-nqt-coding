/*Problem Statement –
Joseph is learning digital logic subject which will be for his next semester.
He usually tries to solve unit assignment problems before the lecture.
Today he got one tricky question. The problem statement is “A positive integer has been given as an input. Convert decimal value to binary representation.
Toggle all bits of it after the most significant bit including the most significant bit.
Print the positive integer value after toggling all bits”.

Constrains-
1<=N<=100

Example 1:
Input : 10  -> Integer

Output :
5    -> result- Integer

Explanation:
Binary representation of 10 is 1010. After toggling the bits(1010), will get 0101 which represents “5”. Hence output will print “5”.*/

#include <bits/stdc++.h>
using namespace std;
/*
int main()
{
    int n;
    cin >> n;
    string binary;

    while (n != 0)
    {
        binary.push_back((n % 2) + '0');
        n = n / 2;
    }
    reverse(binary.begin(), binary.end());
    // cout << "Binary: " << binary << endl;

    for (int i = 0; i < binary.size(); i++)
    {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
    }
    // cout << "after toggle: " << binary << endl;

    int result = 0;
    for (char c : binary)
    {
        result = result * 2 + (c - '0');
    }
    cout << result;
}
*/

int main()
{
    int n;
    cin >> n;

    int len = floor(log2(n)) + 1; // number of bits
    int mask = (1 << len) - 1;    // mask of len 1s

    int result = (~n) & mask; // toggle only those bits

    cout << result;
}

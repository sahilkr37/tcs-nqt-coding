/*Problem Statement: Given a string, write a program to count the number of vowels, consonants, and spaces in that string.
Examples:

Example 1:
Input: string str=”Take u forward is Awesome”
Output:
Vowels: 10
Consonants: 11
White spaces: 4

Example 2:
Input: string str=”India won the cricket match”
Output:
Vowels: 8
Consonants: 15
White spaces: 4*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int vowel = 0, space = 0, consonant = 0;
    for (char c : str)
    {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')
            vowel++;
        else if (c == ' ')
            space++;
        else
        {
            if (tolower(c) > 'a' && tolower(c) < 'z')
                consonant++;
        }
    }

    cout << "Vowels: " << vowel << endl;
    cout << "Consonants: " << consonant << endl;
    cout << "White spaces: " << space << endl;
    return 0;
}
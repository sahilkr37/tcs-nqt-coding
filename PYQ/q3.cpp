/*Jack is always excited about sunday.It is favourite day, when he gets to play all day.And goes to cycling with his friends.
So every time when the months starts he counts the number of sundays he will get to enjoy.
Considering the month can start with any day,be it Sunday, Monday….Or so on.
Count the number of Sunday jack will get within n number of days.

Example 1 :
Input
mon->input String denoting the start of the month.
 13->input integer denoting the number of days from the start of the month.

Output :
2->number of days within 13 days.
Explanation :
The month start with mon(Monday).So the upcoming sunday will arrive in next 6 days.And then next Sunday in next 7 days and so on.
Now total number of days are 13. It means 6 days to first sunday and then remaining 7 days will end up in another sunday.Total 2 sundays may fall within 13 days
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string day;
    int totalDays;
    cin >> day;
    cin >> totalDays;
    int dayIndex = 0;

    if (day == "mon")
        dayIndex = 1;
    else if (day == "tue")
        dayIndex = 2;
    else if (day == "wed")
        dayIndex = 2;
    else if (day == "thr")
        dayIndex = 2;
    else if (day == "fri")
        dayIndex = 2;
    else if (day == "sat")
        dayIndex = 2;
    else if (day == "sun")
        dayIndex = 0;

    int firstSunday = (7 - dayIndex) % 7;
    int sundays = 0;
    if (totalDays > firstSunday)
    {
        sundays = 1 + (totalDays - firstSunday) / 7;
    }
    cout << sundays;

    return 0;
}
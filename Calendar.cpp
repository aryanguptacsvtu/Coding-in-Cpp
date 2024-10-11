#include <iostream>

using namespace std;

// Function to check if the year is a leap year
bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a month
int getDaysInMonth(int month, int year)
{
    if (month == 2)
    {
        return isLeapYear(year) ? 29 : 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    else
    {
        return 31;
    }
}

// Function to print the calendar of a given year
void printCalendar(int year)
{
    cout << "Calendar for the year " << year << ":" << endl;

    for (int month = 1; month <= 12; month++)
    {
        cout << "\n\n" << month << "/" << year << ":" << endl;
        cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;

        int startingDay = 1;

        // Adjust the starting day of the week for January 1st
        if (month > 1)
        {
            for (int m = 1; m < month; m++)
            {
                startingDay += getDaysInMonth(m, year);
            }
        }
        startingDay %= 7;

        // Print leading spaces
        for (int i = 0; i < startingDay; i++)
        {
            cout << "    ";
        }

        // Print days of the month
        int daysInMonth = getDaysInMonth(month, year);
        for (int day = 1; day <= daysInMonth; day++)
        {
            cout << (day < 10 ? " " : "") << day << "  ";
            if ((day + startingDay) % 7 == 0 || day == daysInMonth)
            {
                cout << endl;
            }
        }
    }
}

int main()
{
    int year = 2024;
    printCalendar(year);
    return 0;
}

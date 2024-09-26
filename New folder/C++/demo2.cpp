#include <stdio.h>   // For printf and scanf
#include <string>  // For strlen
#include <cctype>   // For isalpha and toupper

class TDate {
private:
    int day;
    int month;
    int year;

    // Helper function to convert month number to month name
    const char* MonthToName(int month) const {
        static const char* months[] = {
            "Invalid", "January", "February", "March", "April", "May", "June", 
            "July", "August", "September", "October", "November", "December"
        };
        return (month >= 1 && month <= 12) ? months[month] : months[0];
    }

    // Helper function to check if a year is a leap year
    bool IsLeapYear(int year) const {
        return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    }

    // Helper function to check if a day is valid for the given month and year
    bool IsValidDay(int day, int month, int year) const {
        static const int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        if (month < 1 || month > 12) return false;
        int maxDays = daysInMonth[month - 1];
        if (month == 2 && IsLeapYear(year)) maxDays = 29;
        return (day >= 1 && day <= maxDays);
    }

public:
    // Default constructor
    TDate() : day(1), month(1), year(1900) {}

    // Parameterized constructor
    TDate(int d, int m, int y) : day(d), month(m), year(y) {}

    // Function to accept date input
    void AcceptDate() {
        printf("Enter day: ");
        scanf("%d", &day);
        printf("Enter month: ");
        scanf("%d", &month);
        printf("Enter year: ");
        scanf("%d", &year);
    }

    // Function to print date in dd-mm-yyyy format
    void PrintDate_dd_mm_yyyy() const {
        printf("%d-%d-%d\n", day, month, year);
    }

    // Function to print date in dd-month-yyyy format
    void PrintDate_dd_month_yyyy() const {
        printf("%d-%s-%d\n", day, MonthToName(month), year);
    }

    // Function to validate the date
    bool ValidateDate() const {
        return IsValidDay(day, month, year);
    }
};

int main() {
    TDate date;

    // Accept date from user
    date.AcceptDate();

    // Validate date and print it
    if (date.ValidateDate()) {
        printf("Valid date.\n");
        date.PrintDate_dd_mm_yyyy();
        date.PrintDate_dd_month_yyyy();
    } else {
        printf("Invalid date.\n");
    }

    return 0;
}

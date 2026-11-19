#include <stdio.h>
#include <time.h>

int main()
{
    int year, month, day;

    int daysInMonth[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    char *monthNames[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    printf("Enter year: ");
    scanf("%d", &year);

    /* Check for leap year */
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        daysInMonth[1] = 29;
    }

    printf("\n========== CALENDAR FOR %d ==========\n", year);

    for (month = 0; month < 12; month++)
    {
        struct tm firstDay = {0};

        /* Set date to first day of current month */
        firstDay.tm_year = year - 1900;
        firstDay.tm_mon = month;
        firstDay.tm_mday = 1;

        /* Calculate weekday */
        mktime(&firstDay);

        printf("\n------------ %s ------------\n", monthNames[month]);

        /* Weekday headings */
        printf("Sun Mon Tue Wed Thu Fri Sat\n");

        /* Spaces before first day */
        for (day = 0; day < firstDay.tm_wday; day++)
        {
            printf("    ");
        }

        /* Print dates */
        for (day = 1; day <= daysInMonth[month]; day++)
        {
            printf("%3d ", day);

            /* New line after Saturday */
            if ((firstDay.tm_wday + day) % 7 == 0)
            {
                printf("\n");
            }
        }

        printf("\n");
    }

    return 0;
}
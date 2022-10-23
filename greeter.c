#include <stdio.h>
#include <time.h>

int main()
{
//title
    printf("\n - MartFN's Greeter - \n  (github.com/martfn)\n\n");

// declaring variables that use the <time.h> library and the tm_struct time structure to tell the current hours and mins.
    time_t now = time(NULL);
    struct tm *tm_struct = localtime(&now);

    int hour = tm_struct->tm_hour;
    int min = tm_struct->tm_min;

// if statements: if it's before 12, it will say good morning.
            // if it's between 12 and 20, it will say good afternoon.
            // if it's after 20, it will say good evening.
    if (hour < 12) {
        printf("Good Morning!");
    }

    if (hour > 12) {
        printf("Good Afternoon!");
    }

    if (hour > 20) {
        printf("Good Evening!");
    }

//final result

    printf("\ncurrent time is %d:%d.\n", hour,min);

    return 0;
}

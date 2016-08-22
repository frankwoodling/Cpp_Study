//Write a program that asks the user to enter the number of seconds as an integer
//value (use type long, or, if available, long long) and that then displays the equivalent
//time in days, hours, minutes, and seconds. Use symbolic constants to represent
//the number of hours in the day, the number of minutes in an hour, and the number
//of seconds in a minute.The output should look like this:

#include <iostream>

int main(){
    long int seconds, seconds_init, days, hours, minutes;
    int const hours_in_day = 24;
    int const minutes_in_hour = 60;
    int const seconds_in_minute = 60;

    std::cout << "Enter the number of seconds: ";
    std::cin >> seconds;
    seconds_init = seconds;

    days = seconds/(hours_in_day*minutes_in_hour*seconds_in_minute);
    seconds = seconds%(hours_in_day*minutes_in_hour*seconds_in_minute);

    hours = seconds/(minutes_in_hour*seconds_in_minute);
    seconds = seconds%(minutes_in_hour*seconds_in_minute);

    minutes = seconds/seconds_in_minute;
    seconds = seconds%seconds_in_minute;

    std::cout << seconds_init << " seconds = " << days << " days, " << hours << " hours, ";
    std::cout << minutes << " minutes, " << seconds << " seconds";
    return 0;
}
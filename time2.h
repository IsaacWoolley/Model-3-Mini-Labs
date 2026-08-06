#ifndef TIME2_H
#define TIME2_H

#include <iostream>
using namespace std;

class Time
{
private:
    int days;
    int hours;
    int minutes;
    int seconds;

    void normalize();

public:
    Time();
    Time(int days, int hours, int minutes, int seconds);
    Time(int hours, int minutes, int seconds);
    Time(int hours, int minutes);
    Time(Time& time);

    int getDays();
    int getHours();
    int getMinutes();
    int getSeconds();

    void setDays(int days);
    void setHours(int hours);
    void setMinutes(int minutes);
    void setSeconds(int seconds);

    Time& operator=(Time& right);

    Time& operator+(Time& right);

    bool operator>(Time& right);
    bool operator<(Time& right);
    bool operator>=(Time& right);
    bool operator<=(Time& right);
    bool operator==(Time& right);

    friend ostream& operator<<(ostream& stream, Time& right);

    operator int();

};

#endif
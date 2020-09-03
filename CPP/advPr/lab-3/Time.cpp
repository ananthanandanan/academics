#include <iostream>

class Time
{

private:
    int hour;
    int minute;
    int second;

public:
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }

    Time(int h, int m, int s)
    {
        hour = h % 24;
        minute = m % 60;
        second = s % 60;
    }

    //Getters

    int getHour()
    {
        return hour;
    }
    int getMinute()
    {
        return minute;
    }

    int getSecond()
    {
        return second;
    }

    //Setters

    void setHour(int h)
    {
        hour = h % 24;
        ;
    }
    void setMinute(int m)
    {
        minute = m % 60;
    }

    void setSecond(int s)
    {
        second = s % 60;
    }

    void setTime(int h, int m, int s)
    {
        hour = h % 24;
        minute = m % 60;
        second = s % 60;
    }

    void print()
    {
        if (hour < 10)
            std::cout << "0" << hour << ":";
        else
            std::cout << hour << ":";

        if (minute < 10)
            std::cout << "0" << minute << ":";
        else
            std::cout << minute << ":";

        if (second < 10)
            std::cout << "0" << second;
        else
            std::cout << second;
            std::cout<<'\n';
    
    }

    void nextSecond()
    {
        second = (second + 1) % 60;
        if (second == 0)
        {
            minute = (minute + 1) % 60;
            if (minute == 0)
                hour = (hour + 1) % 24;
        }
    }
};

int main()
{
    Time t1, t2(23, 59, 59);
    t1.print();
    t2.print();
    t1.nextSecond();
    t1.print();
    t2.nextSecond();
    t2.print();
    std::cout << "t1 hour: " << t1.getHour() << std::endl;
    std::cout << "t2 hour: " << t2.getHour() << std::endl;
    std::cout << "t1 minute: " << t1.getMinute() << std::endl;
    std::cout << "t2 minute: " << t2.getMinute() << std::endl;
    std::cout << "t1 second: " << t1.getSecond() << std::endl;
    std::cout << "t2 second: " << t2.getSecond() << std::endl;
    t1.setHour(24);
    t1.setMinute(56);
    t1.setSecond(59);
    t1.print();
    t1.setTime(9, 59, 59);
    t1.nextSecond();
    t1.print();
    return 0;

    return 0;
}
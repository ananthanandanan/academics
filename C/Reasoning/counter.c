struct counter
{
    int seconds, minutes, hours;
};
struct counter c;
/*@
    requires 0<=c.seconds<60 && 0<=c.minutes<60 && 0<=c.hours<24;
    behavior one:
        assumes c.seconds < 59 && c.minutes < 59;
        ensures c.seconds == \old(c.seconds)+1;
    behavior two:
        assumes c.seconds == 59 && c.minutes < 59;
        ensures c.seconds == 0;
        ensures c.minutes == \old(c.minutes)+1;
    behavior three:
        assumes c.seconds < 59 && c.minutes == 59;
        ensures c.seconds == \old(c.seconds)+1;
    behavior four:
        assumes c.seconds == 59 && c.minutes == 59 && c.hours < 23 ;
        ensures c.seconds == 0;
            ensures c.minutes == 0;
            ensures c.hours == \old(c.hours)+1;
    behavior five:
        assumes c.seconds == 59 && c.minutes == 59 && c.hours == 23 ;
        ensures c.seconds == 0;
            ensures c.minutes == 0;
            ensures c.hours == 0;
    complete behaviors;
    disjoint behaviors;
*/
void tick()
{
    if (c.seconds < 59)
        c.seconds++;
    else
    {
        c.seconds = (c.seconds + 1) % 60;
        if (c.minutes < 59)
            c.minutes++;
        else
            c.minutes = (c.minutes + 1) % 60;
        if (c.hours < 23)
            c.hours++;
        else
            c.hours = 0;
    }
}
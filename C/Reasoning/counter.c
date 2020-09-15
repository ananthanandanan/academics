struct Counter
{
    int hours;
    int minutes;
    int seconds;
};
struct Counter c; // global
/*@requires (c.seconds+1)<=2147483647;
behavior one:
assumes 0<= c.seconds<59;ensures c.seconds ==\old(c.seconds)+1;
behavior two:
assumes c.seconds == 59;ensures c.seconds == 0;*/
void tick()
{
    if(c.seconds > 59){
        c.seconds=0;
        c.minutes+=1;
}

if(c.minutes >59){
    c.hours+=1;
    c.minutes = 0;
}

if(c.hours>12)
{
    c.hours+=1;
    c.seconds =0;
    c.minutes =0;
}

}
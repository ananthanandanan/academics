#include <stdio.h>

/***Member*** 
*   AM.EN.U4CSE19326 K N Anantha nandanan
*   AM.EN.U4CSE19309 Ashish Prem
*   AM.EN.U4CSE19306 Ananda Krishnan S Rajeev
*   AM.EN.U4CSE19346 Ron Jacob Varghese
*/




struct Bowler
{

    char name[10];
    int overs_bowled;
    int runs_conceded;
    int wickets;
    int maiden;
};

/*@
requires(runs>=0 && runs<=6)&&(balls>=0 && balls<=120);
behavior one:
assumes balls%6==0;
ensures b->overs_bowled == \old(b->overs_bowled) +1; 

behavior two:
assumes balls%6!=0;
ensures b->overs_bowled == \old(b->overs_bowled); 

ensures b->runs_conceded == \old(b->runs_conceded)+runs;

behavior three:
assumes wickets==1;
ensures b->wickets == \old( b->wickets)+ wickets;

behavior  four:
assumes wickets==0;
ensures b->wickets == \old( b->wickets);

behavior five:
assumes maiden==1;
ensures b->maiden == \old( b->maiden)+1;

behavior  six:
assumes maiden==0;
ensures b->maiden == \old( b->maiden);


*/

void update_Bowler(struct Bowler *b, int balls, int runs, int wickets, int maiden)
{

    if (balls % 6 == 0)
    {
        b->overs_bowled += 1;
    }

    b->runs_conceded += runs;
    if (wickets != 0)
    {
        b->wickets += wickets;
    }
    if (maiden != 0)
    {
        b->maiden += maiden;
    }
}

struct Player
{
    char name[10];
    int age;
    int num_matches;
    float batting_average;
    float bowling_average;
    int right_handed;
};

/*@
    requires(ag>18&&ag<40) && (rh == 0 || rh == 1);
    requires n>=0 && n<=200;
    ensures p->num_matches == \old(p->num_matches)+n;
    ensures p->right_handed == 0 || p->right_handed == 1;
*/

void update_Player(struct Player *p, int ag, int n, int rh)
{
    p->num_matches += n;
    p->right_handed = rh;
    p->age = ag;
}

struct Team
{
    struct Player player[11];
    char team_name[10];
    char captain[10];
    int runs_scored;
};

/*@
requires rs>=0&& rs<=200;
    ensures t->runs_scored == \old(t->runs_scored)+rs;
*/

void update_Team(struct Team *t, int rs)
{
    t->runs_scored += rs;
}

struct batsman
{
    char name[10];
    int balls_faced;
    int runs_scored;
    float strike_rate;
    float runrate;
    int num_dots;
    int num_fours;
    int num_sixes;
};

/*@
   requires (r>=0 && r<=6)&&(0<=b->balls_faced<=120);
   ensures b->runs_scored == \old(b->runs_scored)+r;
   ensures b->balls_faced == \old(b->balls_faced)+1;
   
   behavior one:
        assumes r==4;
        ensures b->num_fours == \old(b->num_fours)+1;
   behavior two:
        assumes r==6;
        ensures b->num_sixes == \old(b->num_sixes)+1;
   behavior three:
        assumes r==0;
        ensures b->num_dots == \old(b->num_dots) + 1;
   disjoint behaviors one,two,three;
*/

void update(struct batsman *b, int r)
{
    b->balls_faced += 1;
    b->runs_scored += r;
    b->strike_rate = (b->runs_scored / b->balls_faced) * 100;
    b->runrate = (b->runs_scored / (b->balls_faced / 6));
    if (!r)
        b->num_dots += 1;
    else if (r % 4 == 0)
        b->num_fours += 1;
    else if (r % 6 == 0)
        b->num_sixes += 1;
}

struct over{
    int over_number;
    int balls_bowled;
    int wickets;
    int runs_scored;
};
/*@ requires (over>-1 && over<20) && runs>-1 && (balls<120 && balls>0) && wic>-1;
ensures a->runs_scored==\old(a->runs_scored)+runs;
ensures a->wickets==\old(a->wickets)+wic;
behavior one:
assumes balls%6==0;
ensures a->over_number==\old(a->over_number)+1;
behavior two:
assumes balls%6!=0;
ensures a->balls_bowled==\old(a->balls_bowled)+balls%6 ;
disjoint behaviors one,two;


*/
void update_over(struct over *a,int over,int balls,int wic,int runs){
    if(balls%6==0){
        a->over_number+=1;
    }
    if(balls%6!=0){
        a->balls_bowled+=(balls%6);
    }
    a->runs_scored+=runs;
    a->wickets+=wic;
}

struct scorecard{
    int total_runs;
    int wickets;
    int total_overs;
    int over_complete;
    int target_score;
};
/*@
requires 0<=runs<1000 && 0<=wic<=10 && 0<=comp<=20;
ensures a->total_runs==\old(a->total_runs)+runs;
ensures a->wickets==\old(a->wickets)+wic;
ensures a->over_complete==\old(a->over_complete)+comp;
*/
void update_scorecard(struct scorecard *a,int runs, int wic,int comp){
    a->total_runs+=runs;
    a->wickets+=wic;
    a->over_complete+=comp;
}


/*---output---
[kernel] Parsing cricket.c (with preprocessing)
[wp] Warning: Missing RTE guards
[wp] 24 goals scheduled
[wp] Proved goals:   24 / 24
Qed:              16  (2ms-17ms-38ms)
Alt-Ergo 2.3.1:    8  (15ms-41ms-51ms) (231)


*/
#include <iostream>
using namespace std;
void assessment(int);
main()
{
 int tom_want_rest_minutes=30000;
 int per_holiday_game_play_minutes=89;
 int per_workingday_game_play_minutes=49;
 int holiday;
 int minutes_of_game_play;
 int difference; 
 cout <<" Enter Holidays Of Owner ";
 cin>>holiday;
 int workingday;
 workingday=365-holiday;
 minutes_of_game_play= workingday*per_workingday_game_play_minutes + holiday*per_holiday_game_play_minutes;
 difference = tom_want_rest_minutes- minutes_of_game_play;
 assessment(difference);
}
 void assessment(int a)
{
 if(a>0)
{ 
 cout <<" Tom Sleeps Well "<<endl;
 cout <<a<<" minutes less for play"<<endl;
}
 if(a<0)
{
 a=-a; 
 cout <<" Tom does not Sleep Well "<<endl;
 cout <<a<<" minutes extra for play"<<endl;
}
}

#include <iostream>
#include <windows.h>
using namespace std;
void maze();
void move(int,int);
void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X= x;
 coordinates.Y= y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
main()
{
system ("cls");
gotoxy(30,16);
int x = 35;
int y = 19;
maze();
gotoxy (35,18);
cout<<" P ";
while(true)
{
 move(x,y); 
 if (y<=26)
 {
  y=y+1;
 }
 if (y==27)
 {
  gotoxy(35,y-1);
  cout<<"  ";
  y=19; 
 }
 }
}
void maze ()
{
 cout<<"********************************"<<endl;
gotoxy(30,17);
 cout<<"*                              *"<<endl;
gotoxy(30,18);
 cout<<"*                              *"<<endl;
gotoxy(30,19);
 cout<<"*                              *"<<endl;
gotoxy(30,20);
 cout<<"*                              *"<<endl;
gotoxy(30,21);
 cout<<"*                              *"<<endl;
gotoxy(30,22);
 cout<<"*                              *"<<endl;
gotoxy(30,23);
 cout<<"*                              *"<<endl;
gotoxy(30,24);
 cout<<"*                              *"<<endl;
gotoxy(30,25);
 cout<<"*                              *"<<endl;
gotoxy(30,26);
 cout<<"*                              *"<<endl;
gotoxy(30,27);
 cout<<"*                              *"<<endl;
gotoxy(30,28);
 cout<<"********************************"<<endl;
 }
void move(int x, int y)
{
 gotoxy(x,y-1);
 cout<<"     ";
 gotoxy(x,y);
 cout<< " P ";
 Sleep(200);
}











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
 system("cls");
 maze();
 int x=4;
 int y=4;
 move(x,y);
}
void maze ()
{
 cout<<"********************************"<<endl;
 cout<<"*                              *"<<endl;
 cout<<"*                              *"<<endl;
 cout<<"*                              *"<<endl;
 cout<<"*                              *"<<endl;
 cout<<"*                              *"<<endl;
 cout<<"*                              *"<<endl;
 cout<<"*                              *"<<endl;
 cout<<"*                              *"<<endl;
 cout<<"*                              *"<<endl;
 cout<<"*                              *"<<endl;
 cout<<"*                              *"<<endl;
 cout<<"********************************"<<endl;
 }
void move(int a,int b)
{ 
 gotoxy(a-1,b-1);
 cout<<" ";
 gotoxy(a,b);
 cout<<" P ";
 Sleep (200);
}









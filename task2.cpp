#include <iostream>
#include <windows.h>
using namespace std;
void maze();
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
 gotoxy(7,5);
 cout<<" P ";
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
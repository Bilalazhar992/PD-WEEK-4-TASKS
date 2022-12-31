#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X= x;
 coordinates.Y= y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
main()
{
 cout <<" test ";
 gotoxy(15,20);
 cout<<" My name is Bilal ";
} 
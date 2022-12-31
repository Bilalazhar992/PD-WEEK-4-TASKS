#include <iostream>
#include <windows.h>
using namespace std;
void print_a();
void print_a1();
void print_w();

void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X= x;
 coordinates.Y= y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void print_i()
{
             cout<<"*********        ";
gotoxy(22,30);
             cout<<"    *       ";
gotoxy(22,31);           
             cout<<"    *       ";
gotoxy(22,32);
             cout<<"    *       ";
gotoxy(22,33);
             cout<<"    *       ";
gotoxy(22,34);
             cout<<"*********       ";
}
void print_s()
 {
             cout<<"  ********  ";
 gotoxy(22,37);                
             cout<<" *        * ";
 gotoxy(22,38);
             cout<<"   *          ";
 gotoxy(22,39);
             cout<<"       *          "; 
 gotoxy(22,40);
             cout<<"          *          "; 
 gotoxy(22,41);
             cout<<"  ********          ";
 }  
main()
{
system("cls");
gotoxy(20,8);
print_a();
gotoxy(22,15);
print_w();
gotoxy(20,21);
print_a1();
gotoxy(22,29);
print_i();
gotoxy(22,36);
print_s();
}
void print_a()
{
             cout<<"      *          "<<endl;
gotoxy(20,9);             
             cout<<"    *   *          "<<endl;
gotoxy(20,10);                 
             cout<<"   *     *         "<<endl;
gotoxy(20,11);         
             cout<<"  *********             "<<endl;
gotoxy(20,12);
             cout<<"  *       *              "<<endl;
gotoxy(20,13);
             cout<<"  *       *             "<<endl;
}
 void print_w()
{
cout<<"*       *     ";
gotoxy(22,16);
cout<<"*       * ";
gotoxy(22,17);
cout<<"*   *   * ";
gotoxy(22,18);
cout<<"*  * *  * ";
gotoxy(22,19);
cout<<"*       * ";
}
void print_a1()
{
             cout<<"      *          "<<endl;
gotoxy(20,22);             
             cout<<"    *   *          "<<endl;
gotoxy(20,23);                 
             cout<<"   *     *         "<<endl;
gotoxy(20,24);         
             cout<<"  *********             "<<endl;
gotoxy(20,25);
             cout<<"  *       *              "<<endl;
gotoxy(20,26);
             cout<<"  *       *             "<<endl;
}


                

















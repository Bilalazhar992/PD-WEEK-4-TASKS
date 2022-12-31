#include <iostream>
using namespace std;
void display(int);
main()
{
 float red_rose_price_per_piece;
 float white_rose_price_per_piece;
 float tulip_price_per_piece;
 red_rose_price_per_piece=2.00;
 white_rose_price_per_piece=4.10;
 tulip_price_per_piece=2.50;
 int flower1;
 int flower2;
 int flower3;
 float total_price_red_roses ;
 float total_price_white_roses; 
 float total_price_tulip_roses ; 
 float total_price;
 cout<<" Enter number of red roses ";
 cin>>flower1;
 cout<<" Enter number of white roses ";
 cin>>flower2;
 cout<<" Enter number of tulip ";
 cin>>flower3;
 total_price_red_roses= red_rose_price_per_piece * flower1;
 total_price_white_roses= white_rose_price_per_piece * flower2;
 total_price_tulip_roses= tulip_price_per_piece * flower3;
 total_price=  total_price_red_roses + total_price_white_roses + total_price_tulip_roses;
 display (total_price);
}
 void display(int a)
 { 
   float discont;
   float new_price;
   if (a>200)
    {
     discont= a*0.2;
     new_price=a-discont;
     cout<<" Original Price "<<a<<endl;
     cout<<" Price after Discont "<<new_price<<endl;
    }
    if (a<200)
    {
    cout<<" Original Price "<<a<<endl;
    cout<<" Price after Discont "<<a<<endl;
    }
  }









 
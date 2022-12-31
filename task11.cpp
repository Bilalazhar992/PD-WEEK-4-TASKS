#include <iostream>
using namespace std;
void challan (int);
main()
{
 int speed;
 cin>>speed;
 challan(speed);
}
void challan (int figure)
{
 if (figure<=100)
 {
  cout<<" Perfect you are going good "<<endl;
 }
  if (figure>100)
 {
  cout<<" You will be challaned ";
 }
}
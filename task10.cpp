#include <iostream>
using namespace std;
void flight_rate(string,int);
main()
{
 string country_name;
 int ticket_price;
 while(true)
{
 cout<<" Enter country name ";
 cin>>country_name;
 cout<<" Enter ticket price in dollars ";
 cin>>ticket_price;
 flight_rate(country_name,ticket_price);
}
}
void flight_rate(string name ,int money)
{
  float discont ;
  float final_price;
 if (name== "pakistan")
 {
  discont= 0.05*money;
  final_price = money - discont;
  cout<<" Final price in dollars "<<final_price<<endl;
 }
 if (name== "ireland")
 {
  discont= 0.1*money;
  final_price = money - discont;
  cout<<" Final price in dollars "<<final_price<<endl;
 }
 if (name== "india")
 {
  discont= 0.2*money;
  final_price = money - discont;
  cout<<" Final price in dollars "<<final_price<<endl;
 }   
 if (name== "england")
 {
  discont= 0.3*money;
  final_price = money- discont;
  cout<<" Final price in dollars "<<final_price<<endl;
 } 
 if (name== "canada")
 {
  discont= 0.4*money;
  final_price = money - discont;
  cout<<" Final price in dollars "<<final_price<<endl;
 }
}     
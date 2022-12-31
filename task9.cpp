#include <iostream>
using namespace std;
void reverse(string);
main()
{
 string decision;
 cin>>decision;
 reverse (decision);
}
void reverse (string remarks)
{
 if (remarks=="true")
 {
  cout<<"false"<<endl;
 }
 if (remarks=="false")
 {
  cout<<"true"<<endl;
 }
}

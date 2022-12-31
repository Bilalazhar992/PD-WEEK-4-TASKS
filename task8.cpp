#include <iostream>
using namespace std;
void decision_maker(int,int);
main()
{
int a;
int b;
cout<<" Enter two numbers ";
cin>>a;
cin>>b;
decision_maker(a,b);
}
void decision_maker(int n1,int n2)
{
 if (n1>n2)
  {
   cout<<" False "<<endl;
  }
  if (n1<n2)
  {
   cout<<" False "<<endl;
  }
  if (n1==n2)
  {
   cout<< " True ";
  }
}

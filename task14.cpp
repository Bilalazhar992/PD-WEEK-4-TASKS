#include <iostream>
using namespace std;
void mainmenu ();
main()
{
 while (true)
 mainmenu();
}
 void mainmenu ()
{
 int d;
 string name ;
 string name1 ;
 string name2 ;
 float ecat_marks;
 float matric_marks;
 float inter_marks;
 string father_name;
 float percentage_ecat_marks;
 float percentage_matric_marks;
 float percentage_inter_marks;
 float a;
 float b;
 float c;
 float aggregate;
 float aggregate1;
 float aggregate2;
 cout<<"                                                                                                    "<<endl; 
 cout<<"                                                                                                    "<<endl; 
 cout<<"                                                                                                    "<<endl; 
 cout<<"                                                                                                    "<<endl;
 cout<<"                       ********************************************************                   "<<endl;
 cout<<"                       *                                                      *                   "<<endl;
 cout<<"                       *                                                      *                   "<<endl;
 cout<<"                       *       UNIVERSITY OF ENGINEERING AND TECNOLOGY        *                   "<<endl;
 cout<<"                       *                      LAHORE.                         *                   "<<endl;
 cout<<"                       *            ADMISSION MANEGEMENT SYSTEM               *                   "<<endl;
 cout<<"                       *                                                      *                   "<<endl;
 cout<<"                       *                                                      *                   "<<endl;
 cout<<"                       *                                                      *                   "<<endl;
 cout<<"                       ********************************************************                   "<<endl;
 cout<<"                                                                                                    "<<endl; 
 cout<<"                                                                                                    "<<endl; 
 cout<<"                                                                                                    "<<endl; 
 cout<<" Press 1 for aggregate calculation "<<endl;
 cout<<" Press 2 for comparison "<<endl;
 cout<<" Enter your choice ";
 cin>>d;
 if (d==1)
 {
 cout<<" NAME: ";
 cin>>name;
 cout<<" FATHER NAME: ";
 cin>>father_name;
 cout<<" ECAT MARKS: ";
 cin>>ecat_marks;
 cout<<" MATRIC MARKS ";
 cin>>matric_marks;
 cout<<" INTER MARKS: ";
 cin>>inter_marks;
 percentage_ecat_marks= (ecat_marks/400)*100 ;
 percentage_matric_marks= (matric_marks/1100)*100; 
 percentage_inter_marks=  (inter_marks/1100)*100;
 a=percentage_ecat_marks*0.3;
 b= percentage_matric_marks*0.3;
 c= percentage_inter_marks * 0.4;
 aggregate = a + b + c;
 cout<<" AGGREGATE OF "<<name<<" IS "<<aggregate<<endl;
}
 if (d==2)
 { 
 cout<<" NAME: ";
 cin>>name1;
 cout<<" FATHER NAME: ";
 cin>>father_name;
 cout<<" ECAT MARKS: ";
 cin>>ecat_marks;
 cout<<" MATRIC MARKS ";
 cin>>matric_marks;
 cout<<" INTER MARKS: ";
 cin>>inter_marks;
 percentage_ecat_marks= (ecat_marks/400)*100 ;
 percentage_matric_marks= (matric_marks/1100)*100; 
 percentage_inter_marks=  (inter_marks/1100)*100;
 a=percentage_ecat_marks*0.3;
 b= percentage_matric_marks*0.3;
 c= percentage_inter_marks * 0.4;
 aggregate1 = a + b + c;
 
 cout<<" NAME: ";
 cin>>name2;
 cout<<" FATHER NAME: ";
 cin>>father_name;
 cout<<" ECAT MARKS: ";
 cin>>ecat_marks;
 cout<<" MATRIC MARKS ";
 cin>>matric_marks;
 cout<<" INTER MARKS: ";
 cin>>inter_marks;
 percentage_ecat_marks= (ecat_marks/400)*100 ;
 percentage_matric_marks= (matric_marks/1100)*100; 
 percentage_inter_marks=  (inter_marks/1100)*100;
 a=percentage_ecat_marks*0.3;
 b= percentage_matric_marks*0.3;
 c= percentage_inter_marks * 0.4;
 aggregate2 = a + b + c;
 
 if(aggregate2>aggregate1)
 {
  cout<< name2<< " has roll no.1 "<<endl;
 }
 if(aggregate1>aggregate2)
 {
  cout<<   name1  << " has roll no.1 "<<endl;
 }
 }
}













 
  



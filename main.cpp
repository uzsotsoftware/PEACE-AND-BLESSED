/* 
 * File:   main.cpp
 * Author: R135263F
 *
 * Created on November 12, 2014, 5:51 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>




class Students
{
int mark,resits;
char *name;
float fees;
public:
Students(int x,int y,float d,char *name;){resits=y;mark=x;fees=d;name=n;}
Students operator();
int showstudent(){return fees,resits;}
};

Students Students::operator-()//
overloading unary minus
{
fees=-fees;
resits=-resits;
return *this;
}
int main()
{Students obj(int x,int y,float d,char *name);
char *name;
float d;
int y;
int x;
cout<<"Enter fees..."<<endl;
cin>>d;
cout<<"Enter marks..."<<endl;
cin>>x;
cout<<"Enter resits..."<<endl;
cin>>y;
cout<<"Enter name..."<<endl;
getline.cin>>n;


obj;
cout<<"fees and resits"<<obj.showstudent();

return 0;
}



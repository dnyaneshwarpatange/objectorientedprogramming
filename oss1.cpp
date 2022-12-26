#include <iostream>
using namespace std;
class complex
{
int x;
int y;
public:
complex()
{
x=y=0;
}
complex operator +(complex);
complex operator *(complex);
friend istream & operator >> (istream &input, complex & c)
{
cout<<"Enter real part of complex number : ";
input>>c.x;
cout<<"Enter imaginary part of complex number : ";
input>>c.y;
}
friend ostream & operator << (ostream &output, complex & c)
{
output<<c.x<<" + "<<c.y<<"i"<<endl;
}
};
// defining outside class
// return_type Class_name :: function_name
complex complex :: operator + (complex c)
{
complex temp;
temp.x=x+c.x;
temp.y=y+c.y;
return temp;
}
complex complex :: operator * (complex c)
{
complex temp;
temp.x=(x*c.x)-(y*c.y);
temp.y=(x*c.y)+(y*c.x);
return temp;
}
int main()
{
complex c1,c2,c3,c4;
int ch;
do
{
cout<<"______________MENU_________________";
cout<<"1. Default Constructor"<<endl;
cout<<"2. Add Complex numbers "<<endl;
cout<<"3. Display Complex number"<<endl;
cout<<"4. Addition of Complex numbers "<<endl;
cout<<"5. Multiplication of Complex numbers"<<endl;
cout<<"6. Exit"<<endl;
cout<<"\nEnter choice : ";
cin>>ch;
switch(ch)
{
case 1:
cout<<"\nDefault constructor : ";
cout<<c1;
break;
case 2:
cout<<"\nEnter first number : ";
cin>>c1;
cout<<"\nEnter second number : ";
cin>>c2;
break;
case 3:
cout<<"1st Complex Number : ";
cout<<c1;
cout<<"2nd Complex Number : ";
cout<<c2;
break;
case 4:
c3=c1+c2;
cout<<"Addition of Complex number : ";
cout<<c3;
break;
case 5:
c4=c1*c2;
cout<<"Multiplication of Complex number : ";
cout<<c4;
break;
case 6:
exit(0);
}
}while(ch!=6);
return 0;
}
#include<iostream>
using namespace std;
template<class T>
class sort
{
T a[20];
public:
int n,i,j;
void accept()
{
cout<<"Enter the number of elements in array:"<<endl;
cin>>n;
cout<<"Enter elements in array:"<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
}
void ssort()
{
for(i=0;i<n;i++)
{
T temp;
int min=i;
for(j=i+1;j<n;j++)
{
if(a[min]>a[j])
{
min=j;
}
}
temp=a[i];
a[i]=a[min];
a[min]=temp;
 }
 }
 void display()
 {
 cout<<"Array after sorting:"<<endl;
 for(i=0;i<n;i++)
 cout<<a[i]<<" ";
}
};
int main()
{
sort<int>s1;
sort<float>s2;
int ch,i;
do
{
cout<<"\n1. Integer values"<<endl;
cout<<"\n2. Float values"<<endl;
cout<<"\n3. Exit"<<endl;
cout<<"Enter the choice:";
cin>>ch;
switch(ch)
{
case 1:
s1.accept();
s1.ssort();
s1.display();
break;
case 2:
s2.accept();
s2.ssort();
s2.display();
break;
case 3:
exit(0);
break;
}
}
while(ch!=3);
return 0;
}

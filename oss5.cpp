#include<iostream>
#include<iterator>
using namespace std;
template<typename T>
void sort(T a[], int n)
{
int i,j,min_pos;
T temp;
for(i = 0; i<n; i++)
{
min_pos = i;
for(j = i + 1; j < n; j++)
{
if(a[j] < a[min_pos])
{
min_pos = j;
}
}
if(min_pos != i)
{
temp = a[i];
a[i] = a[min_pos];
a[min_pos] = temp;
}
}
cout<<"\nSORTED ELEMENTS ARE: "<<endl;
for(j = 0; j<n; j++)
{
cout<<"\t"<<a[j];
}
}
int main()
{
int n,ch;
int a[10];
float b[10];
do{
cout<<"\n------------------------SELECTION SORT USING FUNCTION TEMPLATE---------------";
cout<<"\n1.TO SORT INTEGER USING SELECTION SORT"<<endl;
cout<<"\n2.TO SORT FLOAT USING SELECTION SORT"<<endl;
cout<<"\n3.TO EXIT"<<endl;
cout<<"PLEASE ENTER THE CHOICE"<<endl;
cin>>ch;
switch(ch)
{
case 1:
cout<<"\nINTEGER ARRAY:"<<endl;
cout<<"\nENTER HOW MANY NUMBERS YOU WANNA SORT"<<endl;
cin>>n;
for(int i = 0; i<n; i++)
{
cin>>a[i];
}
sort<int>(a,n);
break;
case 2:
cout<<"\nFLOAT ARRAY:"<<endl;
cout<<"\nENTER HOW MANY NUMBERS YOU WANNA SORT"<<endl;
cin>>n;
for(int i = 0; i<n; i++)
{
cin>>b[i];
}
sort<float>(b,n);
break;
}
}while(ch != 3);
return 0;
}
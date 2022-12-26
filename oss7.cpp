#include <iostream>
#include <iterator>
#include <map>
using namespace std;
int main()
{
string state_name;
int population,n;
// empty map container
map<string,int> state;
cout<<"\n How many entries in a map";
cin>>n;
for(int i=0;i<n;i++)
{
cout<<"\n Enter state name";
cin>>state_name;
cout<<"\n Enter population";
cin>>population;
state.insert(pair<string,int>(state_name,population));
}
// printing map state
map<string,int>::iterator itr;
cout << "\nThe map state is : \n";
cout << "\tState\tPopulation\n";
for (itr = state.begin(); itr != state.end(); ++itr) {
cout << '\t' << itr->first
<< '\t' << itr->second << '\n';
}
cout << endl;
cout<<"\n Enter state";
cin>>state_name;
// cout<<"\n The population of state "<<state_name<<" is: "<<state[state_name]<<<<endl;
itr = state.find(state_name);
if(itr == state.end())
cout << "Key-value pair not present in map" ;
else
cout << "Key-value pair present : "<<endl;
cout << itr->first << "->" << itr->second ;
cout << endl ;
return 0;
}
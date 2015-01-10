#include <iostream>
#include <map>
#include <string>
using namespace std;

string country;
int beauty=0;
char input[75];
int count,count2=0;

int main()
{
	// cin>>count;
	while(cin>>input)
	{
		for(int i =0; i<75;i++)
		{
			if(input[i] != '\0')
			{
				country = country + input[i];
			}
			else
			{
				i = 75;
			}
		}
		
		// while(input!=' ')
		// {
			// country = input;
			
		// }
		// cout<<country;
		// map<string,int>mymap;
		
		// mymap[country] = beauty;
		
		// for(map<string,int>::iterator i = mymap.begin(); i != mymap.end(); i++)
		// {
			// cout<<i->first<<" => "<<i->second<<"\n";
		// }
		// count2 +=1;
	}
	
}
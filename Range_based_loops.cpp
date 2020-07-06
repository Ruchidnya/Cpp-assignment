//Range_based_operations.cpp

#include <iostream>
#include <vector>
#include <map>

using namespace std;


int main()
{
	// Vector : 
	vector<int> v = { 2, 4, 6, 8 };

	for( auto i : v )
	{
		cout << i << " " ;
	}

	cout << endl;

	// Map : 
	map <int,char> m({{1,'a'},{2,'b'},{3,'c'}});
	for( auto i : m )
	{
		cout << i.first << " - " << i.second << endl;
	}	

}

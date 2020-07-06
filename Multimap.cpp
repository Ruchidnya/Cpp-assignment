#include <iostream>
#include <map>

using namespace std;

int main()
{
	multimap <int, int> mm;
	mm.insert(pair <int, int> (1, 40)); 
	mm.insert(pair <int, int> (2, 30));
       	mm.insert(pair <int, int> (3, 60)); 
	mm.insert(pair <int, int> (4, 20)); 
	mm.insert(pair <int, int> (5, 50)); 
	mm.insert(pair <int, int> (6, 50)); 
	mm.insert(pair <int, int> (6, 10));
	
	cout << "Multimap value : " << endl;
	for( auto i=mm.begin() ; i!=mm.end() ; i++ )
	{
		cout << i->first << " - " << i->second << endl;
	}

	mm.erase(6);
	cout << "Multimap value after erasing 6 : " << endl;
	for( auto i=mm.begin() ; i!=mm.end() ; i++ )
	{
		cout << i->first << " - " << i->second << endl;
	}
}

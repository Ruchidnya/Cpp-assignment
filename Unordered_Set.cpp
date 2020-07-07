#include <iostream>
#include <set>
#include <unordered_set>
#include <string>

using namespace std;

int main ()
{
	unordered_set <string> us;
	us.insert("Hello");
	us.insert("From");
	us.insert("The");
	us.insert("Other ");
	us.insert("Side");

	for( auto i : us )
	{
		cout << i << endl;
	}
	string s="Side ";
	cout << endl << s;
	if(us.find(s)==us.end())
	{
		cout << "Found";
	}
	else
	{
		cout << "Not found";
	}

}

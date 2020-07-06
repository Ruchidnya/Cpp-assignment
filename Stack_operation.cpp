//Stack_Operations.cpp

#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> s;

	s.push(10);
	s.push(11);
	s.push(12);
	s.push(13);

	cout << "The size of the stack is : " << s.size() << endl;
	cout << "the stack elements are : " ;

	while(!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}
}

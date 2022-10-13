/* Stack using Template*/
#include<iostream>
#include<stack>    // Including Standard Library Template stack
using namespace std;

int main()
{
	//Creating a stack container
	stack<int> s;  
	//Pushing elements into stack s using push()
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	// size() displays size of stack s
	cout<<"\n The size of stack is "<<s.size();
    //Displaying elements of stack s
	cout<<"\n Elements of stack are :- ";
	while(!s.empty())  //empty() returns true if stack is empty, else false
	{
		cout<<" "<<s.top(); //top() gives element at top
		s.pop();  //pop() removes element at top
	}
	return 0;
}

/* Queue using Template*/
#include<iostream>
#include<queue>    // Including Standard Library Template queue
using namespace std;

int main()
{
	//Creating a queue container
	queue<int> q;  
	//Inserting elements into queue q using push()
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	// size() displays size of queue q
	cout<<"\n The size of queue is "<<q.size();
	//Displays front element using front()
	cout<<"\n Front element is "<<q.front();
	//Displays rear element using back()
	cout<<"\n Rear element is "<<q.back();
    //Displaying elements of queue q
	cout<<"\n Elements of queue are :- ";
	while(!q.empty())  //empty() returns true if queue is empty, else false
	{
		cout<<" "<<q.front(); //front() gives element at front
		q.pop();  //pop() removes element at front
	}
	return 0;
}

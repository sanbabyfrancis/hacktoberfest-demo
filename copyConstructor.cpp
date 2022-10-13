/* Copy Constructor*/
/*Copy constructor is used to initialise an object with the object of same class*/
#include<iostream>
using namespace std;
class Copy    
{
	public:
		int a;
		int b;
    //Parameterised constructor		
	Copy(int n1,int n2)  
	{
		a=n1;
		b=n2;
	}
	//Copy Constructor
	Copy(Copy &c)    
	{
		a=c.a;     //Copies value in variable a of c object to variable a of calling object
		b=c.b;     //Copies value in variable b of c object to variable b of calling object
		//Any changes made in c object reflect back in copy2 object
	}
};

int main()
{
	Copy copy1(5,10);
	Copy copy2(copy1); // Copy constructor called to initialise copy2 object with values in copy1 object
	cout<<"\n Values of Copy1 object are :-";
	cout<<"\n a= "<<copy1.a<<" b= "<<copy1.b;
	cout<<"\n Values of Copy2 object are :-";
	cout<<"\n a= "<<copy2.a<<" b= "<<copy2.b;
}

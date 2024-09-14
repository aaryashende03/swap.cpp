#include<iostream>
using namespace std;
int main()
{
	int x = 10 , y = 20;
	
	cout<<"Values before swapping x ="<<x<<"y ="<<y<<endl;
	
	y = x + y;
	x = y - x;
	y = y - x; 

	
	cout<<"Values after swapping x = "<<x<<"y ="<<y<<endl;
	return 0;
}
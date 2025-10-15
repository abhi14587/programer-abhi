/*#include<iostream>
using namespace std;
int factorial(int n){
	if (n<=1){
		return 1;}
	else{
		return n*factorial(n-1);
	}	
}

int main()
{
	int number;
	cout<<"enter a number"<<endl;
	cin>>number;
	if (number<0)
	cout<<"factorial not work for non negative"<<endl;
	else
	{
		int result=factorial(number);
		cout<<result<<endl;
	}
	
	
}*/

#include<iostream>
using namespace std;
int x=100;
int main()
{
	int x;
	cout<<"enter number"<<endl;
	cin>>x;
	cout<<"local: is "<<x<<endl;
	cout<<"global is"<<::x;
}














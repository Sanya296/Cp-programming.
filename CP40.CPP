#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,x,r=0,b;
	cout<<"\n\t Enter any no\t";
	cin>>n;
	x=n;
	while(n!=0)
	{
		b=n%10;
		r=r*10+b;
		n=n/10;
	}
	cout<<"\n\t Reverse of "<<x<<" is"<<r;
	getch();
}// end of main
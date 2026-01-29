#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	long int n,x,b,s=0;
	cout<<"\n\t Enter any no\t";
	cin>>n;
	x=n;
	while(n!=0)
	{
		b=n%10;
		s=s+b;
		n=n/10;
	}
	if(s==10)
	{
	cout<<"\n\t Magic no "<<x;
	}
	else
	{
		cout<<"\n\t Not a magic no "<<x;
	}
	getch();
}// end of main
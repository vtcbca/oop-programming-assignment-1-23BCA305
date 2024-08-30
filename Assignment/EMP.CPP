#include<iostream.h>
#include<conio.h>
class employee
{
	int eid,salary,i;
	char ename[10];
	char dept[10];
	public:
	employee()
	{
		clrscr();
		cout<<"enter a eid:";
		cin>>eid;
		cout<<"enter a name:";
		cin>>ename;
		cout<<"enter department:";
		cin>>dept;
		cout<<"enter a salary:";
		cin>>salary;


	}
	void display()
	{
		clrscr();
		cout<<"id :"<<eid;
		cout<<"\nname :"<<ename;
		cout<<"\ndepartment :"<<dept;
		cout<<"\nsalary :"<<salary;
	}
};
void main()
{
	employee e;
	clrscr();
	e.display();
	getch();
}











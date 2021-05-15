#include<iostream>
#include<iomanip>
#include<typeinfo>
using namespace std;
string section[100],rollno[100],standerd[100];
char name[100];
int deposit=0,maths[100],physics[100],chemistry[100],hindi[100],english[100];
float sum[100];
void create_New_Record()
{

    // hello coders this is my first project
	int choice;
	cout<<"Enter the number of students = "<<endl;
	cin>>choice;
	if(deposit==0)
	{
	deposit=deposit+choice;
	for(int i=0;i<choice;i++)
	{
		cout<<"\nEnter the data of student "<<i+1<<endl<<endl;
		cout<<"Enter the name of the student = "<<endl;
		cin>>name[i];
		let:
		cout<<"Enter the roll number of the student ="<<endl;
		cin>>rollno[i];
		for(int j=0;j<i;j++)
		{
			if(rollno[j]==rollno[i])
			{
				cout<<"This roll number is already used"<<endl;
				goto let;
			}
		}
		cout<<"Enter the standerd of the student = "<<endl;
		cin>>standerd[i];
		cout<<"Enter the section of the student = "<<endl;
		cin>>section[i];
		go:
		cout<<"Enter the marks of english of the student = "<<endl;
		cin>>maths[i];
		if((maths[i]>=0)&&(maths[i]<=100))
		{
		}
		else
		{
			cout<<"Please enter valid marks"<<endl;
			goto go;
		}
		to:
		cout<<"Enter the marks of  hindi of the student = "<<endl;
		cin>>physics[i];
		if((physics[i]>=0)&&(physics[i]<=100))
		{
		}
		else
		{
			cout<<"Please enter valid marks"<<endl;
			goto to;
		}
		three:
		cout<<"Enter the marks of physics of the student = "<<endl;
		cin>>chemistry[i];
		if((chemistry[i]>=0)&&(chemistry[i]<=100))
		{
		}
		else
		{
			cout<<"Please enter valid marks"<<endl;
			goto three;
		}
		four:
		cout<<"Enter the marks of chemistry of the student = "<<endl;
		cin>>hindi[i];
		if((hindi[i]>=0)&&(hindi[i]<=100))
		{
		}
		else
		{
			cout<<"Please enter valid marks"<<endl;
			goto four;
		}
		five:
		cout<<"Enter the marks of maths of the student = "<<endl;
		cin>>english[i];
		if((english[i]>=0)&&(english[i]<=100))
		{
			sum[i]=maths[i]+physics[i]+chemistry[i]+hindi[i]+english[i];
		}
		else
		{
			cout<<"Please enter valid marks"<<endl;
			goto five;
		}
	}
	}
	else
	{
	for(int i=deposit;i<deposit+choice;i++)
	{
		cout<<"\nEnter the data of student "<<i+1<<endl<<endl;
		cout<<"Enter the name of the student = "<<endl;
		cin>>name[i];
		get:
		cout<<"Enter the roll number of the student = "<<endl;
		cin>>rollno[i];
		for(int j=0;j<i;j++)
		{
			if(rollno[j]==rollno[i])
			{
				cout<<"This roll number is already used"<<endl;
				goto get;
			}
		}
		cout<<"Enter the standerd of the student = "<<endl;
		cin>>standerd[i];
		cout<<"Enter the section of the student = "<<endl;
		cin>>section[i];
		six:
		cout<<"Enter the marks of english of the student = "<<endl;
		cin>>maths[i];
		if((maths[i]>=0)&&(maths[i]<=100))
		{
		}
		else
		{
			cout<<"Please enter valid marks"<<endl;
			goto six;
		}
		seven:
		cout<<"Enter the marks of  hindi of the student = "<<endl;
		cin>>physics[i];
		if((physics[i]>=0)&&(physics[i]<=100))
		{
		}
		else
		{
			cout<<"Please enter valid marks"<<endl;
			goto seven;
		}
		eight:
		cout<<"Enter the marks of physics of the student = "<<endl;
		cin>>chemistry[i];
		if((chemistry[i]>=0)&&(chemistry[i]<=100))
		{
		}
		else
		{
			cout<<"Please enter valid marks"<<endl;
			goto eight;
		}
		nine:
		cout<<"Enter the marks of chemistry of the student = "<<endl;
		cin>>hindi[i];
		if((hindi[i]>=0)&&(hindi[i]<=100))
		{
		}
		else
		{
			cout<<"Please enter valid marks"<<endl;
			goto nine;
		}
		jaipur:
		cout<<"Enter the marks of maths of the student = "<<endl;
		cin>>english[i];
		if((english[i]>=0)&&(english[i]<=100))
		{
			sum[i]=maths[i]+physics[i]+chemistry[i]+hindi[i]+english[i];
		}
		else
		{
			cout<<"Please enter valid marks"<<endl;
			goto jaipur;
		}
	}
	deposit=deposit+choice;
	}
}
int main()
{

	int choice;

	while(true)
	{
	cout<<"\nEnter 1 to create new record";
	cin>>choice;
	switch(choice)
	{
		case 1: create_New_Record();
			break;
}
}
}

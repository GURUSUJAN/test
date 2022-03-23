#include"iostream"
#include"string"
#include"time.h"
#include"cctype"
using namespace std;
void fun(int x);
class test
{
	string a,b;
	static int marks;
    static float total_marks;
	public:
		void info()
		{
			cout<<"1.Which of the following is not the keyword in c++"<<endl;
			cout<<"a.Volatile"<<endl<<"b.Friend"<<endl<<"c.Extends"<<endl<<"d.this"<<endl;
			cin>>a;
			if(a=="c")
			{
			    total_marks=total_marks+1;
			}
			else
			{
			    total_marks=total_marks-1.25;
			}
			cout<<"2.How many number of arguments can a destructor of a class receives"<<endl;
			cout<<"a.0"<<endl<<"b.1"<<endl<<"c.2"<<endl<<"d.None of the above"<<endl;
			cin>>b;
			if(b=="b")
			{
			    total_marks=total_marks+1;
			}
			else
			{
			    total_marks=total_marks-1.25;
			}
			cout<<"3.Which is the storage specifier used to modify the member variable even though the class object is a constant object"<<endl;
			cout<<"a.Auto"<<endl<<"b.Static"<<endl<<"c.Register"<<endl<<"d.Mutable"<<endl;
			cin>>a;
			if(a=="d")
			{
			    total_marks=total_marks+1;
			}
			else
			{
			    total_marks=total_marks-1.25;
			}
			cout<<"4.The default access specifer for the class members is"<<endl;
			cout<<"a.Public"<<endl<<"b.Private"<<endl<<"c.Protected"<<endl<<"d.None of the above"<<endl;
			cin>>b;
			if(b=="b")
			{
			    total_marks=total_marks+1;
			}
			else
			{
			    total_marks=total_marks-1.25;
			}
            cout<<"5.Choose the operator which cannot be overloaded."<<endl;
			cout<<"a./"<<endl<<"b.%"<<endl<<"c.::"<<endl<<"d.~"<<endl;
			cin>>a;
			if(a=="c")
			{
			    total_marks=total_marks+1;
			}
			else
			{
			    total_marks=total_marks-1.25;
			}
			cout<<"6.what is the output of the following programm"<<endl;
            cout<<"#include<iostream>"<<endl;
            cout<<"using namespace std;"<<endl;
            cout<<"class abc {"<<endl;
            cout<<"public:"<<endl;
            cout<<"int i; "<<endl;
            cout<<"abc(int i) {"<<endl; 
            cout<<"i = i;"<<endl;
            cout<<"}"<<endl;
            cout<<"};"<<endl;
            cout<<"main() { "<<endl;
            cout<<"abc m(5); "<<endl;
            cout<<"cout<<m.i;"<<endl;
            cout<<"}"<<endl;
			cout<<"a.5"<<endl<<"b.Garbage value"<<endl<<"c.Error"<<endl<<"d.None of the above"<<endl;
			cin>>b;
			if(b=="b")
			{
			    total_marks=total_marks+1;
			}
			else
			{
			    total_marks=total_marks-1.25;
			}
			cout<<"7.A constructor can be virtual."<<endl;
			cout<<"a.True"<<endl<<"b.False"<<endl;
			cin>>a;
			if(a=="b")
			{
			    total_marks=total_marks+1;
			}
			else
			{
			    total_marks=total_marks-1.25;
			}
			cout<<"8.Which of the following is not a type of constructor"<<endl;
			cout<<"a.Copy constructor"<<endl<<"b.Friend constructor"<<endl<<"c.Default constructor"<<endl<<"d.Parameterized constructor"<<endl;
			cin>>b;
			if(b=="b")
			{
			    total_marks=total_marks+1;
			}
			else
			{
			    total_marks=total_marks-1.25;
			}
			cout<<"9.Which of the following term is used for a function defined inside a class"<<endl;
			cout<<"a.Member variable"<<endl<<"b.Member function"<<endl<<"c.Class function"<<endl<<"Classic function"<<endl;
			cin>>a;
			if(a=="b")
			{
			    total_marks=total_marks+1;
			}
			else
			{
			    total_marks=total_marks-1.25;
			}
			cout<<"10.Which of the following cannot be friend"<<endl;
			cout<<"a.Function"<<endl<<"b.Class"<<endl<<"c.Object"<<endl<<"d.All of these"<<endl;
			cin>>b;
			if(b=="c")
			{
			    total_marks=total_marks+1;
			}
			else
            {
			    total_marks=total_marks-1.25;
			}
            cout<<"your score is"<<total_marks;
            fun(total_marks);
		}
};
int test::marks;
float test::total_marks;
void fun(int x);
main()
{
    string num1;
    int num2;
    int a=1;
    int b=2;
    int c=3;
    cout<<"                                                                                                     NaiJu"<<endl;
    cout<<"Please enter your name Miss/Mr.: ";
    cin>>num1;
    cout<<endl<<"Welcome "<<num1<<endl;
    cout<<"Here we go "<<endl;
    cout<<"1.Start Quiz"<<endl<<"2.View Score"<<endl<<"3.Exit"<<endl;
    cout<<"Enter your choice "<<num1<<": ";
    cin>>num2;
    if(num2==a)
    {
        cout<<"Enter answers in a, b, c and d only..."<<endl;
        cout<<"10 questions of each 1 mark"<<endl;
        cout<<"20 min time"<<endl;
        
	test o1,o2;
	o1.info();
    }
    else if (num2==b)
    {
       cout<<"write the test"<<endl;
       //fun(int x);
    }
    else if(num2==c)
    {
        exit(0);
    }
    else
    {
        cout<<"PLEASE ENTER CORRECT NUMBER "<<num1<<endl;
        exit(0);
    }
}
void fun(int x)
{
    cout<<x<<endl;

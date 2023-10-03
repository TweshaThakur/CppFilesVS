





#include<iostream>

using namespace std;




class Test
{
	int x=12;
	public:
		Test()
		{
			cout<<"Object created"<<endl;
		}
	void display()
	{
		cout<<"Function of class Test"<<endl;
	}
};
struct TestS
{
	int y=10;

};
int main()
{
	struct TestS *s1;
	TestS s;
	s1=&s;
	cout<<s1->y<<endl;
	//Test t1;
	//t1.display();
	Test *t;
	Test t1;
	t=&t1;
	t1.display();
	t->display();
	return 0;
}



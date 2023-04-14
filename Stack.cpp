#include<iostream>
#include<string>
using namespace std;

int n = 5;
int stack [5];
int top = -1;

void push(int val)
{
	if (top >= n-1)
	{
		cout << "overflow\n";
	}
	else
	{
		top++;
		stack[top] = val;
	}
}

void pop()
{
	if (top<=-1)
	{
		cout << "underflow\n";
	}
	else
	{
		cout << "num if popped is " << stack[top] << endl;
		top--;
	}
}
void display()
{
	if (top>=0)
	{
		for (int i = top; i >= 0; i--)
		{
			cout << " element is : " << stack[i] << endl;
			
		}
	}
	else
	{
		cout << "empty \n";
	}
}

int main()
{
	int num, val;
	cout << "to insert press :1\n";
	cout << "to remove press :2\n";
	cout << "to display press :3\n";
	cout << "to exit press :4\n";
	
	do
	{
		cout << "enter choice \n";
		cin >> num;

		switch (num)
		{
		case 1: 
		{
			cout << "enter value in stack \n";
			cin >> val;
		    push(val);
			break;
	    }
		case 2:
		{
			pop();
			break;
		}

		case 3:
		{
			display();
			break;
		}
		case 4:
		{
			cout << "exit\n";
			exit;
		}
		default: {cout << "invalid num\n"; }


		}
	}
	while (num != 4);

	return 0;
}
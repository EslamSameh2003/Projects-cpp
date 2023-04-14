#include<iostream>
#include<string>
#include<stack>
using namespace std;

struct node
{
	struct node *next;
	int data;
};

struct node* top=NULL;

void push(int val)
{
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = val;
	newnode->next = top;
	top = newnode;
	
}
void pop()
{
	if (top==NULL)
	{
		cout << "stack underflow\n";
	}
	else
	{
		cout << "pop element : " << top->data << endl;
		top = top->next;
	}
}
void display()
{
	if (top==NULL)
	{
		cout << "is empety\n";
	}
	else
	{
		while (top!=NULL)
		{
			cout << top->data << endl;
			top = top->next;
		}
	}
	cout << endl;
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
	} while (num != 4);

	return 0;
}
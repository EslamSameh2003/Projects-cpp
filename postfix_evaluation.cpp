#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
#include<cmath>
using namespace std;

struct node
{
	int data;
	node* next;
};
node* top = NULL;

void push(int value)
{
	node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->next = top;
	newnode->data = value;
	top = newnode;
}
void pop()
{
	if (top == NULL)
	{
		cout << "stack is empty\n";
	}
	else
	{
		cout << "\nthe element popped is => " << top->data << "\n";
		top = top->next;
	}
}
void op(char c)
{
	int r = 0, assign;

	if (c == '+')
	{
		assign = top->data;
		pop();
		r = top->data + assign;
		pop();
		push(r);
		cout << r << " ";

	}
	else if (c == '-')
	{
		assign = top->data;
		pop();
		r = top->data - assign;
		pop();
		push(r);
		cout << r << " ";
	}
	else if (c == '/')
	{
		assign = top->data;
		pop();
		r = top->data / assign;
		pop();
		push(r);
		cout << r << " ";


	}
	else if (c == '*')
	{
		assign = top->data;
		pop();
		r = top->data * assign;
		pop();
		push(r);
		cout << r << " ";


	}
	else if (c == '^')
	{
		assign = top->data;
		pop();
		r = top->data ^ assign;
		pop();
		push(r);
		cout << r << " ";


	}

}



void Postfix_evaluation(string exp)
{

	for (int i = 0; i < exp.length(); i++)
	{
		if (exp[i] >= '0' && exp[i] <= '9')
		{
			push(exp[i] - '0');
		}
		else
		{
			op(exp[i]);
		}

	}

}

int main()
{
	string s;
	cout << "Enter postfix expression \n";
	cin >> s;
	Postfix_evaluation(s);
	cout << endl;
	return 0;
}
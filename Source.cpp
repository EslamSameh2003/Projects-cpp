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
	node* newnode = new node;
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

int Postfix_evaluation(string exp)
{
	for (int i = 0; i < exp.length(); ++i) {


		if (exp[i] >= '0' && exp[i] <= '9')
		{
			push(exp[i] - '0');
		}
		else {
			int s1 = top->data;
			pop();
			int s2 = top->data;
			pop();
			if (exp[i] == '+')
			{

				push(s1 + s2);
			}
			else if (exp[i] == '-')
			{
				push(s1 - s2);
			}
			else if (exp[i] == '*')
			{
				push(s1 * s2);
			}
			else if (exp[i] == '/')
			{
				push(s1 / s2);
			}
			else if (exp[i] == '^')
			{
				push(s1 ^ s2);
			}

		}
	}
	return top->data;
}

int main()
{
	string s;
	cin >> s;
	cout << "postfix evaluation: " << Postfix_evaluation(s);

	return 0;
}
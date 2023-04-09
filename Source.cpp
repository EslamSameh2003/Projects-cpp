#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
#include<cmath>

using namespace std;
// stack begin
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
// end of stack
int evaluatePostfix(string exp)
{
	for (int i = 0; i < exp.size(); ++i) {

		if (isdigit(exp[i]))
		{
			push(exp[i] - '0');
		}
		else {
			int val1 = top->data;
			pop();
			int val2 = top->data;
			 pop();
			switch (exp[i]) {
			case '+':
				push(val2 + val1);
				break;
			case '-':
				push(val2 - val1);
				break;
			case '*':
				push(val2 * val1);
				break;
			case '/':
				push(val2 / val1);
				break;
			case '^':
				push(val2 ^ val1);
				break;
			}
		}
	}
	return top->data;
}

int main()
{
	string exp ;
	cin >> exp;
	cout << "postfix evaluation: " << evaluatePostfix(exp);

	return 0;
}
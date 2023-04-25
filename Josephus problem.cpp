#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	int data;
	node* next;

};
node* pointer1 = NULL; //front
node* pointer2 = NULL; //rear
node* temp = NULL;

void Insert(int val)
{
	if (pointer1 == NULL)
	{
		node* newnode = new node;
		pointer1 = newnode;
		pointer2 = newnode;
		pointer2->data = val;
		pointer2->next = pointer1;

	}
	else
	{
		node* newnode = new node;
		pointer2->next = newnode;
		pointer2 = newnode;
		pointer2->data = val;
		pointer2->next = pointer1;

	}


}

//void Delete()
//{
//	temp = pointer1;
//
//	if (pointer1 == NULL)
//	{
//		cout << "is Empety\n";
//
//	}
//	else if (pointer1 == pointer2)
//	{
//		cout << "this element is the last one : " << temp->data << endl;
//		free(temp);
//		pointer1 = NULL;
//		pointer2 = NULL;
//	}
//	else
//	{
//		cout << temp->data << endl;
//		pointer1 = pointer1->next;
//		free(temp);
//
//	}
//
//
//}

void Josephus_Game(int players,int count)
{
	temp = pointer1;
	while (players!=1)
	{
		node* p = NULL;

		for ( int i = 0; i <(count -1); i++)
		{

			temp = temp->next;
		}
		p = temp->next;
		temp->next = temp->next->next;
		free(p);
		temp = temp->next;
		players--;


	}
	cout << temp->data << endl;
}

//void display()
//{
//	temp = pointer1;
//	if (pointer1 == NULL)
//	{
//		cout << "queue is empty\n";
//	}
//	else
//	{
//		do
//		{
//			cout << temp->data << "\t";
//			temp = temp->next;
//		} while (temp != pointer1);
//
//	}
//}

int main()
{
	int count, num, in;
	cin >> num >> count;

	for (int i = 0; i < num; i++)
	{
		cin >> in;
		Insert(in);
	}
	
	Josephus_Game(num,count);
	
	
}
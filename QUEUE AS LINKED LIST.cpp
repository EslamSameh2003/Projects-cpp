#include <iostream>
using namespace std;
struct node {
	int data;
	struct node* next;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;
void Insert() {
	int val;
	cout << "Insert the element in queue : " << endl;
	cin >> val;
	if (rear == NULL) {
		rear = (struct node*)malloc(sizeof(struct node));
		rear->next = NULL;
		rear->data = val;
		front = rear;
	}
	else {
		temp = (struct node*)malloc(sizeof(struct node));
		rear->next = temp;
		temp->data = val;
		temp->next = NULL;
		rear = temp;
	}
}
void Delete() {
	temp = front;
	if (front == NULL) {
		cout << "Underflow" << endl;
		return;
	}
	else
		if (temp->next != NULL) {
			temp = temp->next;
			cout << "Element deleted from queue is : " << front->data << endl;
			free(front);
			front = temp;
		}
		else {
			cout << "Element deleted from queue is : " << front->data << endl;
			free(front);
			front = NULL;
			rear = NULL;
		}
}
void Display() {
	temp = front;
	if ((front == NULL) && (rear == NULL)) {
		cout << "Queue is empty" << endl;
		return;
	}
	cout << "Queue elements are: ";
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
int main() {
	int ch;
	cout << "1) Insert element to queue" << endl;
	cout << "2) Delete element from queue" << endl;
	cout << "3) Display all the elements of queue" << endl;
	cout << "4) Exit" << endl;
	do {
		cout << "Enter your choice : " << endl;
		cin >> ch;
		switch (ch) {
		case 1: Insert();
			break;
		case 2: Delete();
			break;
		case 3: Display();
			break;
		case 4: cout << "Exit" << endl;
			break;
		default: cout << "Invalid choice" << endl;
		}
	} while (ch != 4);
	return 0;
}


/*



#include<iostream>
#include<string>

using namespace std;
struct node
{
	int data;
	node* next;
};
node* front = NULL;
node* rear = NULL;
node* temp;

void enqueue(int val)
{
	node* newnode = new node;
	if (front == NULL)
	{

		newnode->next = NULL;
		front = newnode;
		rear = newnode;
		rear->data = val;

	}
	else
	{

		rear->next = newnode;
		rear = newnode;
		rear->data = val;
		rear->next = NULL;

	}

}

void dequeue()
{

	if (front == NULL)
	{
		cout << "is underflow\n";
		return;


	}
	else
	{

		cout << "remove element : " << front->data << endl;
		front = front->next;

	}

}
void display()
{
	temp = front;

	if (front==NULL)
	{
		cout << "is emety\n";
		return;
	}
	else
	{
		while (temp != NULL)
		{
			cout << "element is : " << temp->data << endl;
			temp = temp->next;

		}

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
			cout << "insert the element\n";
			cin >> val;

			enqueue(val);
			break;
		}
		case 2:
		{
			dequeue();
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






















*/
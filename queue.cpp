#include<iostream>
#include<string>
using namespace std;

int n = 5;
int queue[5];
int front  = -1, rear=-1;
int val;
void enqueue()
{
	if (rear == n - 1)
	{
		cout << "is overflow\n";

    }
	else 
	{
		if (front == -1)
		{
			front = 0;
		}
		cout << "insert the element \n";
		cin >> val;
		rear++;
		queue[rear] = val;
		
		
	}

}

void dequeue()
{
	if (front == -1 || front > rear)
	{
	 cout << "underflow\n";
	 return;
	}
	else
	{
		cout << "remove element is " << queue[front] << endl;
		front++;
	}
	
}
void display()
{
	if (front ==-1)
	{
		cout << "is empety\n";
	}
	else
	{
		for (int i = front; i <= rear; i++)
		{
			cout<<"element is : " << queue[i] << endl;
		}
	}


}

int main()
{
	int num;
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
			enqueue();
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
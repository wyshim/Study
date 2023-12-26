#include <iostream>

struct Node
{
	int data;
	Node* next;
};

Node* createNode(int newData)
{
	Node* newNode = new Node;
	newNode->data = newData;
	newNode->next = nullptr;
	return newNode;
}

Node* insertNode(Node* current, int newData)
{
	Node* newNode = new Node;
	Node* after = current->next;
	newNode->next = current->next;
	current->next = newNode;
	newNode->data = newData;
	return newNode;
}

/*
void printNode(Node* current)
{
	if (current)
	{
		printNode(current->next);
		std::cout << current->data << std::endl;
	}
}
*/

void printNode(Node* head)
{
	if (head)
	{
		std::cout << head->data << std::endl;
		while (head->next)
		{
			head = head->next;
			std::cout << head->data << std::endl;
		}
	}
}

int main()
{
	Node* mainNode = createNode(1);
	Node* secondNode = insertNode(mainNode, 2);
	insertNode(secondNode, 3);
	printNode(mainNode);
}

#include <iostream>
#include <string.h>

/*
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


void printNode(Node* current)
{
	if (current)
	{
		printNode(current->next);
		std::cout << current->data << std::endl;
	}
}


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
	Node* thirdNode = insertNode(secondNode, 3);
	insertNode(secondNode, 4);
	printNode(mainNode);
}
*/

int main()
{
	int arr[10] = { 1,2,3,4,5 };
	int arr2[10] = { 1,2,3,3,5 };
	if (memcmp(arr, arr2, sizeof(int)*5) == 0)
	{
		std::cout << "일치" << std::endl;
	}
	else
	{
		std::cout << "불일치" << std::endl;
	}
	return 0;
}

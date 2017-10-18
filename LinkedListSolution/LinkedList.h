#pragma once
#include "LinkedNode.h"

class LinkedList
{
private:
	LinkedNode* nodeIndex = nullptr;
	int listLength = 0;
	LinkedNode* tail = nullptr;
	LinkedNode* head = nullptr;

	bool isEmpty() { return listLength == 0; }

public:
	int length() {
		return listLength;
	}

	void addLink(int contents) {
		LinkedNode* newNode = new LinkedNode(contents);
		//printf("%d\n", newNode);

		if (isEmpty()) {
			nodeIndex = newNode;
			tail = nodeIndex;
			head = nodeIndex;			
		}
		else {
			head->setNextNode(newNode);
			newNode->setPrevNode(nodeIndex);
			head = newNode;			
		}

		listLength++;

	}

	void delTail() {
		//TODO:
	}

	void printList() {
		LinkedNode* indexNode = tail;

		while (indexNode != nullptr) {
			printf("%d\n", indexNode->getContents());
			indexNode = indexNode->getNextNode();
		}
	}
};


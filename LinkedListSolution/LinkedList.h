#pragma once
#include "LinkedNode.h"

class LinkedList
{
private:
	int listLength = 0;
	LinkedNode* tail = nullptr;
	LinkedNode* head = nullptr;
	LinkedNode* nodeIndex = nullptr;

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
			newNode->setPrevNode(head);
			head = newNode;
			if (listLength == 1)
				tail->setNextNode(head);
		}

		listLength++;

	}

	void delTail() {
		if (listLength == 0) { return; }
		else if (listLength == 1) {	tail->delNode(); }
		else {
			tail = tail->getNextNode();
			tail->getPrevNode()->delNode();
		}

		listLength--;
	}

	void delHead() {
		if (listLength == 0) { return; }
		else if (listLength == 1) { head->delNode(); }
		else {
			head = head->getPrevNode();
			head->getNextNode()->delNode();
		}

		listLength--;
	}

	void delAtIndex() {
		if (nodeIndex == nullptr) { return; }
		if (nodeIndex == tail) { tail->delNode(); }
		else if (nodeIndex == head) { head->delNode(); }
		else {
			LinkedNode* tempPrevNode = nodeIndex->getPrevNode();
			LinkedNode* tempNextNode = nodeIndex->getNextNode();

			nodeIndex->getPrevNode()->setNextNode(tempNextNode);
			nodeIndex->getNextNode()->setPrevNode(tempPrevNode);
		}

		nodeIndex = tail;
		listLength--;
	}
	void printList() {
		LinkedNode* indexNode = tail;

		while (indexNode != nullptr) {
			printf("%d\n", indexNode->getContents());
			indexNode = indexNode->getNextNode();
		}
	}

	void incrementIndex() {
		if (nodeIndex->getNextNode() != nullptr)
			nodeIndex = nodeIndex->getNextNode();
	}

	void decrementIndex() {
		if (nodeIndex->getPrevNode() != nullptr)
			nodeIndex = nodeIndex->getPrevNode();
	}

	int printIndexContents() {
		if (nodeIndex != nullptr)
			return nodeIndex->getContents();
		else
			return -1;
	}
};


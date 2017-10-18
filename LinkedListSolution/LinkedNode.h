#pragma once

class LinkedNode
{
private:
	int contents = 0;
	LinkedNode* prevNode = nullptr;
	LinkedNode* nextNode = nullptr;

	~LinkedNode() {
		printf("LinkedNode being destroyed");
	}


public:
	
	//Constructor
	LinkedNode(int x) {
		contents = x;
	}


	void setPrevNode(LinkedNode* node) {
		prevNode = node;
	}

	void setNextNode(LinkedNode* node) {
		nextNode = node;
	}

	LinkedNode* getPrevNode() {
		return prevNode;
	}

	LinkedNode* getNextNode() {
		return nextNode;
	}

	int getContents() {
		return contents;
	}

	void setContents(int x) {
		contents = x;
	}

	void delPrevNode() {
		prevNode = nullptr;
	}

	void delNextNode() {
		nextNode = nullptr;
	}
};


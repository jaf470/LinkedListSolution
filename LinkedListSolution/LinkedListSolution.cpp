// LinkedListSolution.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LinkedList.h"

int main()
{
	LinkedList newList;
	newList.addLink(4);
	newList.addLink(5);
	newList.addLink(6);
	newList.addLink(7);
	newList.addLink(8);
	newList.addLink(9);
	newList.addLink(6);
	newList.addLink(5);
	newList.addLink(4);
	newList.addLink(3);
	newList.addLink(2);
	newList.printList();

    return 0;
}


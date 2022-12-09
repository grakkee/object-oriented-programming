#ifndef LINKED_LIST
#define LINKED_LIST

#include "ListInterface.h"
#include "Node.h"

template<class itemType>
class LinkedList: public ListInterface<itemType>{
	Node<itemType>* headPtr;
	int itemCount;
	Node<itemType>* getNodeAt(int position) const;

public:
	LinkedList();
	LinkedList(const LinkedList<itemType>& aList);
	bool isEmpty() const;
	int getLength() const;
	bool insert(int newPosition, const itemType& newEntry);
	bool remove(int position);
	void clear();
	itemType getEntry(int position) const;
	itemType replace (int position, const itemType& newEntry); 
};
#include "linkedList.cpp"
#endif
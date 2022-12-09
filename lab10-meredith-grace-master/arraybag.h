#ifndef ARRAY_BAG
#define ARRAY_BAG

#include "bag.h"

template<class itemType>
class ArrayBag: public BagInterface{
private:
	static const int DEFAULT_CAPACITY = 6;
	ItemType items[DEFAULT_CAPACITY]; // bag items
	int itemCount; // count of bag items
	int maxItems;
	int getIndexOf(const itemType& anItem) const; 

public: 
	ArrayBag();
	int getCurrentSize() const;
	bool isEmpty() const;
	bool add(const ItemType& newEntry);
	bool remove(const ItemType& target);
	void clear();
	int getFrequencyOf(const ItemType& target) const;
	bool contains(const ItemType& anEntry) const;

};
#include "arraybag.cpp"
#endif
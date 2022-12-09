#ifndef LIST_INTERFACE
#define LIST_INTERFACE

template<class itemType>
class ListInterface{

public:
	virtual bool isEmpty() const = 0;
	virtual int getLength() const = 0;
	virtual bool insert(int newPosition, const itemType& newEntry) = 0;
	virtual bool remove(int position) = 0;
	virtual void clear() = 0;
	virtual ItemType replace(int position, const itemType& newEntry) = 0;
	
};
#endif
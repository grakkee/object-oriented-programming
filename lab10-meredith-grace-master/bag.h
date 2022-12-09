#ifndef BAG_INTERFACE 
#define BAG_INTERFACE 

template<class ItemType>
class BagInterface {
public:
	virtual int getCurrentSize() const = 0;
	virtual bool isEmpty() const = 0;
	virtual bool add(const ItemType& newEntry) = 0;
	virtual bool remove(const ItemType& target) = 0;
	virtual void clear() = 0;
	virtual int getFrequencyOf(const ItemType& target) const = 0;
	virtual bool contains(const ItemType& anEntry) const = 0;
	virtual ~BagInterface() { }
};
#endif
template<class ItemType>
ArrayBag<ItemType>::ArrayBag() : itemCount(0), maxItems(DEFAULT_BAG_SIZE)
{	
	int result = -1;
	return result; 
} 

template<itemType>
int ArrayBag<itemType>::getIndexOf(const itemType& anItem) const{

}

template<itemType>
int ArrayBag<itemType>::getCurrentSize() const{
	return itemCount;
}

template<itemType>
bool ArrayBag<itemType>::isEmpty() const{
	return itemCount = 0; 
}

template<itemType>
bool ArrayBag<itemType>::add(const ItemType& newEntry){
	bool hasRoomToAdd = (itemCount < maxItems);
	
	if (hasRoomToAdd)
	{
	
	items[itemCount] = newEntry;
	itemCount++;
	
	} // end if
	
	return hasRoomToAdd;

}

template<itemType>
bool ArrayBag<itemType>::remove(const ItemType& target){
	bool canRemoveItem = false;
	
	return canRemoveItem;
}

template<itemType>
void ArrayBag<itemType>::clear(){

}

template<itemType>
int ArrayBag<itemType>::getFrequencyOf(const ItemType& target) const{
	int frequency = -1;
	return frequency;
}

template<itemType>
bool ArrayBag<itemType>::contains(const ItemType& anEntry) const{
	return false; 
}

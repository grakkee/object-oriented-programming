#include <iostream>
using namespace std;

#include "arraybag.h"

int main(){
	ArrayBag<string> bag;

	cout << "isEmpty: returns " << bag.isEmpty() << "; should be 1 (true)" << endl;
	cout << "The bag contains " << bag.getCurrentSize() << " items:" << endl;

	string items[] = {"one", "two", "three", "four", "five", "one"};
	cout << "Add 6 items to the bag: " << endl;
	for (int i = 0; i < 6; i++)	{
		bag.add(items[i]);
	}
	cout << "The bag contains " << bag.getCurrentSize() << " items:" << endl;

	bag.clear();
	cout << "The bag contains " << bag.getCurrentSize() << " items:" << endl;

	return 0;
}
